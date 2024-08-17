#CUDA_VISIBLE_DIVICES = 0,1,2,3,4,5,6,7

from huggingface_hub import login
from transformers import MambaConfig, MambaForCausalLM, AutoTokenizer, AutoModelForCausalLM, GenerationConfig
import torch

def setupLLM():
    #Logging in with API Key: Replace with actual API Key
    login()
    global model_path, tokenizer, model, device #Create global variabes model_path, tokenizer, model for use in future functions
    # Load model directly
    device = "cuda:0" #if torch.cuda.is_available() else "cpu"
#    pipeline = transformers.pipeline(
#    "text-generation",
#    model=model,
#    torch_dtype=None,
#    device_map = "cuda:0"
#    )
    model_path = "models/CodeLlama-7b-hf/"
    tokenizer = AutoTokenizer.from_pretrained(model_path)
    model = AutoModelForCausalLM.from_pretrained(model_path).to(device)

def testFunc():
    print("TEST")

def next_token_probabilities(input_string: str, show_tokens: bool = False, show_shape: bool = False, show_total_probability: bool = False):
    """
    """
    input_ids = tokenizer.encode(input_string, return_tensors="pt")["input_ids"].to(device)
    if show_tokens == True:
        print("INPUT TOKENS:", input_ids)
    #if show_shape == True:
    logits = model(input_ids).logits
    print("SHAPE:", logits.shape)
    logits_temp = logits[0, -1]
    print(logits_temp)
    print(logits_temp.shape)
    probs = torch.nn.functional.softmax(logits_temp, dim=-1)
    #Keep only the top 2
    probs, ids = torch.topk(probs, 2)
    texts = tokenizer.convert_ids_to_tokens(ids)
    total_probability = 0
    for prob, text in zip(probs, texts):
        print(f"{prob:.4f}: \"{text}\"")
        total_probability += prob
    if show_total_probability == True:
        print("TOTAL PROBABILITY: ", total_probability)

def generate_by_token(input_string: str, num_iter: int):
    terminators = [tokenizer.eos_token_id, tokenizer.convert_tokens_to_ids("<|eot_id|>"), tokenizer.convert_tokens_to_ids("\n"), tokenizer.convert_tokens_to_ids("//")]

    inputList = [input_string]
    newIterationList = []

    #First step: simply generate 4 different starter programs for it to branch off of
    input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"].to(device)
    out = model.text_infilling(input_ids, max_new_tokens = 1, num_beams=4, top_k = 4, num_return_sequences=4, no_repeat_ngram_size=1, remove_invalid_values=True)
    newIterationList.extend(tokenizer.batch_decode(out))
    inputList = newIterationList
    print("DEBUG:", inputList)

    #We will be making 4 * 3 * 2 * 1 = 24 different programs
    for i in range(3):
        newIterationList = []
        print("ITERATION", i)
        print("----------")
        answer = ""
        counter = 0
        #For every string, we will generate 3 - i (i = current step) new programs
        for input_string in inputList:
            #probabilities(input_string)
            # while ("\n" not in answer) or ("<|endoftext|>" not in answer):
            input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"].to(device)
            out = model.text_infilling(input_ids, eos_token_id=terminators, max_new_tokens = 10, num_beams=3 - i, top_k = 3 - i, num_return_sequences=3 - i, no_repeat_ngram_size=1, remove_invalid_values=True)
            newIterationList.extend(tokenizer.batch_decode(out))
            counter += 1
            print("Done", counter, "/", len(inputList))
        inputList = newIterationList

    for string in inputList:
        print(string)
        print("-------------")


def generate_by_sentence(input_string: str, num_iter: int):
    terminators = [tokenizer.eos_token_id, tokenizer.convert_tokens_to_ids("<|eot_id|>"), tokenizer.convert_tokens_to_ids("\n"), tokenizer.convert_tokens_to_ids("//")]

    inputList = [input_string]
    newIterationList = []

    #First step: simply generate 4 different starter programs for it to branch off of
    input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"].to(device)
    out = model.generate(input_ids, max_new_tokens = 10, num_beams=4, top_k = 4, num_return_sequences=4, no_repeat_ngram_size=1, remove_invalid_values=True)
    newIterationList.extend(tokenizer.batch_decode(out))
    inputList = newIterationList
    print("DEBUG:", inputList)

    #We will be making 4 * 3 * 2 * 1 = 24 different programs
    for i in range(3):
        newIterationList = []
        print("ITERATION", i)
        print("----------")
        answer = ""
        counter = 0
        #For every string, we will generate 3 - i (i = current step) new programs
        for input_string in inputList:
            #probabilities(input_string)
            # while ("\n" not in answer) or ("<|endoftext|>" not in answer):
            input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"].to(device)
            out = model.generate(input_ids, eos_token_id=terminators, max_new_tokens = 20, num_beams=3 - i, top_k = 3 - i, num_return_sequences=3 - i, no_repeat_ngram_size=1, remove_invalid_values=True)
            newIterationList.extend(tokenizer.batch_decode(out))
            counter += 1
            print("Done", counter, "/", len(inputList))
                # print("DEBUG:", tokenizer.batch_decode(out[:, input_ids.shape[1]:])[0])
                # generated_string = tokenizer.batch_decode(out)
                # input_string = generated_string
                # prompt_length = input_ids.shape[1]
                # answer = tokenizer.decode(out[0][prompt_length:])
                # input_string += answer
                # if ("\n" in answer) or ("<|endoftext|>" in answer):
                #     break
                # print(answer)
            # print(generated_string)
            # newIterationList.extend(tokenizer.batch_decode(out))
        inputList = newIterationList
        # print(inputList)

    for string in inputList:
        print(string)
        print("-------------")
#body_generation = GenerationConfig(max_new_tokens = 100, stop_strings = "\n")

# tokenizer = AutoTokenizer.from_pretrained(model_path, use_safetensors=True)
# model = AutoModelForCausalLM.from_pretrained(model_path, use_safetensors=True)

#EX 1
# input_ids = tokenizer("Hey how are you doing?", return_tensors="pt")["input_ids"]

# out = model.generate(input_ids, max_new_tokens=20, num_beams=2, num_return_sequences=2)
# print(tokenizer.batch_decode(out))

#EXAMPLE 2

# terminators = [tokenizer.eos_token_id, tokenizer.convert_tokens_to_ids("<|eot_id|>"), tokenizer.convert_tokens_to_ids("\n"), tokenizer.convert_tokens_to_ids("//")]

# #INITIAL GENERATOR: SIMPLY TAKE THE TOP TWO TOKENS EVERY TIME
# print("-----------NEW EXAMPLE----------")
# input_string = "#include <stdio.h> \n\nint main(char* x) { \nint x = 0;"
# inputList = [input_string]
# newIterationList = []

# #First step: simply generate 4 different starter programs for it to branch off of
# input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"]
# out = model.generate(input_ids, max_new_tokens = 10, num_beams=4, top_k = 4, num_return_sequences=4, no_repeat_ngram_size=1, remove_invalid_values=True)
# newIterationList.extend(tokenizer.batch_decode(out))
# inputList = newIterationList
# print("DEBUG:", inputList)

# #We will be making 4 * 3 * 2 * 1 = 24 different programs
# for i in range(3):
#     newIterationList = []
#     print("ITERATION", i)
#     print("----------")
#     answer = ""
#     counter = 0
#     #For every string, we will generate 3 - i (i = current step) new programs
#     for input_string in inputList:
#         #probabilities(input_string)
#         # while ("\n" not in answer) or ("<|endoftext|>" not in answer):
#         input_ids = tokenizer(input_string, return_tensors="pt")["input_ids"]
#         out = model.generate(input_ids, eos_token_id=terminators, max_new_tokens = 10, num_beams=3 - i, top_k = 3 - i, num_return_sequences=3 - i, no_repeat_ngram_size=1, remove_invalid_values=True)
#         newIterationList.extend(tokenizer.batch_decode(out))
#         counter += 1
#         print("Done", counter, "/", len(inputList))
#             # print("DEBUG:", tokenizer.batch_decode(out[:, input_ids.shape[1]:])[0])
#             # generated_string = tokenizer.batch_decode(out)
#             # input_string = generated_string
#             # prompt_length = input_ids.shape[1]
#             # answer = tokenizer.decode(out[0][prompt_length:])
#             # input_string += answer
#             # if ("\n" in answer) or ("<|endoftext|>" in answer):
#             #     break
#             # print(answer)
#         # print(generated_string)
#         # newIterationList.extend(tokenizer.batch_decode(out))
#     inputList = newIterationList
#     # print(inputList)

# for string in inputList:
#     print(string)
#     print("-------------")


# #Write initial generator
# #Try to make higher batch sizes
# #How to complete program

# #Call prompt: "int program() {
# #  int x = 1
# #  char* y = "x"
# # 
# # "
# # generates probabilities of next token
# #select 2, recursively call the prompt again on both


# #FIND OUT HOW BEAM SEARCH ACTUALLY WORKS
# #TRY DIFFERENT MAXIMAL TOKENS
# #TRY SDCC AND UPLOAD KEY
# #REFACTOR

# # ['int main(char* x) { \n int x = 0; 
# #\nwhile (x=0){}', 'int main(char* x) { \n int x = 0; \nwhile (x=0){ //', 'int
