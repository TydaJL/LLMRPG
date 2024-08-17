from huggingface_hub import login
from transformers import MambaConfig, MambaForCausalLM, AutoTokenizer, AutoModelForCausalLM, GenerationConfig, PreTrainedTokenizer, PreTrainedModel
import torch
import torch.distributed as dist
import os
import random
import time
from datetime import datetime
import numpy as np
from openai import *
import yaml
import re

class CodeGenerator:
    
    def __init__(self, config_path = './config.yaml'):
        """
        Initializes the class with configuration settings.
    
        Args:
            config_path (str): The path to the configuration file. Default is './config.yaml'.
    
        Attributes:
            config_path (str): The path to the configuration file.
            config (dict): The loaded configuration settings.
            huggingface_api_key (str): API key for Hugging Face.
            openai_api_key (str): API key for OpenAI.
            excluded_tokens (list): Tokens to be excluded during generation.
            finishing_gpt_context (str): Context for the finishing GPT model.
            finishing_gpt_prompt (str): Prompt for the finishing GPT model.
            finishing_gpt_model (str): Model name for the finishing GPT.
            initial_prompt (str): Initial prompt for generation.
            num_generator_choices (int): Number of generator choices.
            num_lines (int): Number of lines to generate.
            num_programs (int): Number of programs to generate.
            num_tokens (int): Number of tokens to generate.
            tokens_per_generation (int): Tokens per generation.
            top_k (int): Top-K sampling parameter.
            lower_top_p (float): Lower Top-P sampling parameter.
            upper_top_p (float): Upper Top-P sampling parameter.
            rank (int): Rank parameter for generation.
            repetition_penalty (float): Repetition penalty for generation.
            seed (int): Seed for random number generation.
            use_llm_if_no_main (bool): Flag to use LLM if no main program is found.
            device (str): Device to run the model on.
            alternate_device (str): Alternate device if CUDA is unavailable.
            show_probabilities (bool): Flag to display token probabilities.
            show_tokens (bool): Flag to display tokens.
            show_shape (bool): Flag to display the shape of the model output.
            model_path (str): Path to the model.
            use_timestamps (bool): Flag to use timestamps in output.
            export_folder (str): Folder to export results.
    
        Raises:
            Exception: If the configuration file cannot be loaded or is invalid.
    
        """
        self.config_path = config_path
        self.config = self.load_config(config_path)
        if self.config == None:
            #print("Error. Cannot initialize. Please check your config file and your config path.")
            return
        self.huggingface_api_key = self.config["API_KEYS"]["HUGGINGFACE_API_KEY"]
        self.openai_api_key = self.config["API_KEYS"]["OPENAI_API_KEY"]
        self.excluded_tokens = self.config["generation_settings"]["excluded_tokens"]
        self.finishing_gpt_context = self.config["generation_settings"]["finishing_gpt_context"]
        self.finishing_gpt_prompt = self.config["generation_settings"]["finishing_gpt_prompt"]
        self.finishing_gpt_model = self.config["generation_settings"]["finishing_gpt_model"]
        self.initial_prompt = self.config["generation_settings"]["initial_prompt"]
        self.num_generator_choices = self.config["generation_settings"]["num_generator_choices"]
        self.num_lines = self.config["generation_settings"]["num_lines"]
        self.num_programs = self.config["generation_settings"]["num_programs"]
        self.num_tokens = self.config["generation_settings"]["num_tokens"]
        self.tokens_per_generation = self.config["generation_settings"]["tokens_per_generation"]
        self.top_k = self.config["generation_settings"]["top_k"]
        self.lower_top_p = self.config["generation_settings"]["lower_top_p"]
        self.upper_top_p = self.config["generation_settings"]["upper_top_p"]
        self.rank = self.config["generation_settings"]["rank"]
        self.repetition_penalty = self.config["generation_settings"]["repetition_penalty"]
        self.seed = self.config["generation_settings"]["seed"] if type(self.config["generation_settings"]["seed"]) == int else random.seed()
        self.use_llm_if_no_main = self.config["generation_settings"]["use_llm_if_no_main"]
        self.device = f"cuda:{self.config['device_settings']['device']}" if torch.cuda.is_available() else self.config["device_settings"]["alternate_device"]
        self.alternate_device = self.config["device_settings"]["alternate_device"]
        self.show_probabilities = self.config["display_settings"]["show_probabilities"]
        self.show_tokens = self.config["display_settings"]["show_tokens"]
        self.show_shape = self.config["display_settings"]["show_shape"]
        self.model_path = self.config["model_path"]
        self.use_timestamps = self.config["output"]["use_timestamps"]
        self.export_folder = datetime.now().strftime("%Y-%m-%d %H:%M:%S") if self.config["output"]["use_timestamps"] == True else self.config["output"]["export_folder"]
        login(self.config["API_KEYS"]["HUGGINGFACE_API_KEY"])
        self.model = AutoModelForCausalLM.from_pretrained(self.model_path).to(self.device)
        self.tokenizer = AutoTokenizer.from_pretrained(self.model_path)
        if self.tokenizer.pad_token is None:
            self.tokenizer.pad_token = self.tokenizer.eos_token
        self.model.generation_config.pad_token_id = self.tokenizer.pad_token_id

    def load_config(self, config_path: str = './config.yaml'):
        """
        Loads a configuration file from the specified path.
    
        This method checks for the existence of a configuration file at the given path.
        If the file does not exist, it prints an error message and returns None.
    
        Args:
            config_path (str): The path to the configuration file. Defaults to './config.yaml'.
    
        Returns:
            dict or None: The loaded configuration as a dictionary if the file exists, 
            otherwise None.
        """
        if not os.path.exists(config_path):
            #print("No configuration file found. Please see the README.md or the GitHub Repository to create a configuration file.")
            return None
        else:
            with open(config_path, 'r') as file:
                config = yaml.safe_load(file)
            #print("Configuration file loaded successfully.")
            return config
    
    def top_n_tokens(self, input_string: str):
        """
        Generates and prints the top N tokens for a given input string based on model probabilities.
    
        This method tokenizes the input string, passes it through the model to obtain logits,
        and then computes the probabilities of the tokens using softmax. It selects the top N
        tokens based on the configuration settings and decodes them to text.
    
        Args:
            input_string (str): The input string to be tokenized and processed by the model.
    
        Returns:
            list: A list of the top N token texts.
    
        Example:
            top_tokens = self.top_n_tokens("Hello, world!")
            #print(top_tokens)
        
        Raises:
            ValueError: If `top_k` or `lower_top_p` is not properly set in the configuration.
    
        Configuration Requirements:
            self.config["top_k"] (int): The number of top tokens to select.
            self.config["lower_top_p"] (float): The lower threshold for token probabilities.
            self.config["upper_top_p"] (float): The upper threshold for the top token probability.
    
        Note:
            This method assumes that `self.tokenizer`, `self.model`, and `self.device` are properly
            initialized and configured.
        """
        input_ids = self.tokenizer(input_string, return_tensors="pt")["input_ids"].to(self.device)
        logits = self.model(input_ids).logits
        probs = torch.nn.functional.softmax(logits[0, -1], dim=-1)
        # Keep the top num_tokens tokens
        probs, ids = torch.topk(probs, min(self.config["top_k"], len(probs[probs > self.config["lower_top_p"]])))
        if probs[0] >= self.config["upper_top_p"]:
            ids = ids[0:1]
        texts = self.tokenizer.batch_decode(ids)
        ##print(texts)
        return texts
    
    def next_token_probabilities(self, input_string: str, 
                                 num_tokens: int = 10, 
                                 show_total_probability: bool = False):
        """
        Displays the probabilities of the next token selection.
    
        Args:
            input_string (str): The input string for which to predict the next token probabilities.
            num_tokens (int): Number of top tokens to display probabilities for. Defaults to 10.
            show_tokens (bool): Whether to print the input tokens. Defaults to False.
            show_shape (bool): Whether to print the shape of the logits. Defaults to False.
            show_total_probability (bool): Whether to print the total probability of the top tokens. Defaults to False.
    
        Globals:
            tokenizer (transformers.PreTrainedTokenizer): Tokenizer loaded from the specified model path.
            model (transformers.PreTrainedModel): Model loaded from the specified model path.
            device (str): Device to run the model on, typically a GPU if available.
    
        Returns:
            None
        """ 
        input_ids = self.tokenizer(input_string, return_tensors="pt")["input_ids"].to(self.device)
    
        if self.show_tokens == True:
            print("INPUT TOKENS:", input_ids)
    
        logits = self.model(input_ids).logits 
        if self.show_shape == True:
            print("SHAPE:", logits.shape)
        
        probs = torch.nn.functional.softmax(logits[0, -1], dim=-1)
        
        # Keep the top num_tokens tokens
        probs, ids = torch.topk(probs, self.top_k)
        texts = self.tokenizer.convert_ids_to_tokens(ids)
        
        # Calculate the total probability of the displayed tokens for sanity checks
        total_probability = 0
        #print("Token ID\t|Probability\t|Text")
        for idnum, prob, text in zip(ids, probs, texts):
            #print(f"{idnum}\t\t|{prob:.4f}\t\t|\"{text}\"")
            total_probability += prob.item()
        
        # After calculating the total probability, display it if the function specifies it
        if self.show_probabilities == True:
            print("TOTAL PROBABILITY:", total_probability)
    
    def replace_first_line(self, c_program: str):
        """
        Replaces the first line of a C program string with a predefined prompt.
    
        This method splits the input C program string into lines, replaces the first line
        with a predefined prompt, and then joins the lines back together into a single string.
    
        Args:
            c_program (str): The input C program as a string.
    
        Returns:
            str: The modified C program with the first line replaced by the predefined prompt.
    
        Note:
            This method assumes that `self.finishing_gpt_prompt` is initialized and set to the desired prompt based on the            config file..
        """
        # Split the string into lines
        lines = c_program.split('\n')
        # Replace the first line
        if lines:
            lines[0] = self.finishing_gpt_prompt
        # Join the lines back together
        #print(lines)
        return '\n'.join(lines)
    
    def generate_token_by_token(self, input_string: str, num_lines: int = 10, show_probabilities: bool = True):
        """
        Generates a program line by line, with each line being generated one token at a time.
    
        Args:
            input_string (str): The input string to start generating text from.
            num_lines (int): The number of lines to generate.
    
        Globals:
            tokenizer (transformers.PreTrainedTokenizer): Tokenizer loaded from the specified model path.
            model (transformers.PreTrainedModel): Model loaded from the specified model path.
            device (str): Device to run the model on, typically a GPU if available.
    
        Returns:
            None
        """
        count = 0
        for _ in range(num_lines):
            input_ids = self.tokenizer.encode(input_string, return_tensors="pt").to(self.device)
            while count < self.num_tokens:    
                input_ids = self.tokenizer.encode(input_string, return_tensors="pt").to(self.device)
                if self.show_probabilities == True:
                    self.next_token_probabilities(input_string)
                output = self.model.generate(input_ids, pad_token_id=self.tokenizer.pad_token_id, num_beams = self.num_generator_choices, max_new_tokens = self.tokens_per_generation, num_return_sequences=self.num_generator_choices, do_sample = True, repetition_penalty=self.repetition_penalty)
                output = self.tokenizer.batch_decode(output[:, input_ids.shape[1]:][:], skip_special_tokens=True)
                output = [element for element in output if element.strip()]
                print(output)
                if not output:
                    output = ["SKIP"]
                random_number = random.randint(0, len(output) - 1)#len(generated_line) - 1)
                next_tokens = output[random_number]
                repeat_count = 0
                while ("//" in next_tokens) or ("/*" in next_tokens) or ("*/" in next_tokens) or ("scanf" in next_tokens) and repeat_count < 5: # In case // is generated and chosen to prevent comments
                    random_number = random.randint(0, len(output) - 1)
                    next_tokens = output[random_number]
                    repeat_count += 1
                    if repeat_count > 5:
                        next_tokens = "SKIP"
                if "<EOT>" in next_tokens and count > self.num_tokens:
                    if re.search(r'main', input_string):
                        input_string = input_string.replace("<FILL_ME>", "")
                        input_string = self.replace_first_line(input_string)
                        #print(input_string)
                        input_string = self.finish_gpt(input_string)
                        #print(input_string)
                        return input_string
                    else:
                        input_string = input_string.replace("<FILL_ME>", "\nint main() {\n\t<FILL_ME>")
                        input_string = input_string + "\nint main() {\n\ta();\n\treturn 0"
                        #input_string = generate_token_by_token(input_string)
                        input_string = self.replace_first_line(input_string)
                        #print(input_string)
                        input_string = self.finish_gpt(input_string)
                        #print(input_string)
                        return input_string
                input_string = input_string.replace("<FILL_ME>", next_tokens + " <FILL_ME>")
                #print(input_string)
                count += 1
        if re.search(r'main', input_string):
            input_string = input_string.replace("<FILL_ME>", "")
            input_string = self.replace_first_line(input_string)
            #print(input_string)
            input_string = self.finish_gpt(input_string)
            #print(input_string)
            return input_string
        else:
            input_string = input_string.replace("<FILL_ME>", "\nint main() {\n\t<FILL_ME>")
            input_string = input_string + "\nint main() {\n\ta();\n\treturn 0"
            #input_string = generate_token_by_token(input_string)
            input_string = self.replace_first_line(input_string)
            #print(input_string)
            input_string = self.finish_gpt(input_string)
            #print(input_string)
            return input_string
    
    def replace_fill_me(self, prompt: str) -> str:
        """
        Generates code to replace the placeholder <FILL_ME> within the input prompt.
    
        This function takes an input string `prompt` that must contain the placeholder <FILL_ME>. It generates a replacement 
        for <FILL_ME> using a text generation model, prints the generated code, and returns the modified string.
    
        Args:
            prompt (str): The input string containing the placeholder <FILL_ME>.
    
        Globals:
            tokenizer (transformers.PreTrainedTokenizer): Tokenizer loaded from the specified model path.
            model (transformers.PreTrainedModel): Model loaded from the specified model path.
            device (str): Device to run the model on, typically a GPU if available.
    
        Returns:
            str: The input string with <FILL_ME> replaced by generated code.
        """
        input_ids = self.tokenizer(prompt, return_tensors="pt")["input_ids"].to(self.device)
        generated_ids = self.model.generate(input_ids, max_new_tokens=self.num_tokens, do_sample = True)
        filling = tokenizer.batch_decode(generated_ids[:, input_ids.shape[1]:], skip_special_tokens = True)[0]
        result = prompt.replace("<FILL_ME>", filling)
        #print(result)
        return result
    
    def replace_multiple(self, replace_prompt: str, num_options: int = 1):
        """
        Generates multiple code replacements for the placeholder <FILL_ME> within the input prompt.
    
        This function takes an input string `replace_prompt` that contains the placeholder <FILL_ME>. It generates 
        multiple replacements for <FILL_ME> using a text generation model, prints each generated code, and returns 
        a list of modified strings.
    
        Args:
            replace_prompt (str): The input string containing the placeholder <FILL_ME>.
            num_options (int, optional): Number of alternative replacements to generate. Defaults to 1.
    
        Globals:
            tokenizer (transformers.PreTrainedTokenizer): Tokenizer loaded from the specified model path.
            model (transformers.PreTrainedModel): Model loaded from the specified model path.
            device (str): Device to run the model on, typically a GPU if available.
    
        Returns:
            list: A list of strings, each with <FILL_ME> replaced by generated code.
        """
        input_ids = self.tokenizer(replace_prompt, return_tensors="pt")["input_ids"].to(self.device)
        generated_ids = self.model.generate(input_ids, max_new_tokens=self.num_tokens, num_beams=self.top_k, top_k = self.top_k, num_return_sequences = self.top_k, remove_invalid_values=True, temperature = 1, do_sample = True)
        programList = []
        for i in range(self.num_generator_choices):
            filling = self.tokenizer.batch_decode(generated_ids[:, input_ids.shape[1]:], skip_special_tokens = True)[i]
            result = replace_prompt.replace("<FILL_ME>", filling)
            programList.append(result)
            #print(result)
        return programList
    
    def export_string_to_c_file(self, content: str, destination_folder: str, file_name: str):
        """
        Exports a string into a .c file.
         
        Parameters:
        content (str): The string to be written into the .c file.
        file_path (str): The full path, including the file name, where the .c file will be saved.
        """
        # Ensure the destination folder exists
        os.makedirs(destination_folder, exist_ok=True)
        file_name = f"{file_name}"
        file_path = os.path.join(destination_folder, file_name)
        # Write the content to the .c file
        with open(file_path, 'w') as file:
            file_name = f"{file_name}.c"
            file.write(content)

    def export_strings_to_c_files(self, strings: list[str], destination_folder: str):
        """
        Exports a list of strings into .c files in a new folder.
    
        Parameters:
        strings (list): List of strings to be written into .c files.
        destination_folder (str): The path to the folder where .c files will be saved.
    
        """
        # Ensure the destination folder exists
        if self.config["output"]["use_timestamps"] == True:
            destination_folder = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        os.makedirs(destination_folder, exist_ok=True)
        for i, content in enumerate(strings):
            # Define the filename for each .c file
            file_name = f"file_{i + 1}.c"
            file_path = os.path.join(destination_folder, file_name)
    
            # Write the content to the .c file
            with open(file_path, 'w') as file:
                file.write(content)
    
        #print(f'All strings have been exported to {destination_folder}.')
    
    def replace_random_line(self, text):
        """
        Replaces a randomly chosen line in the input text with the string "<FILL_ME>".
    
        Args:
            text (str): The input text containing multiple lines.
    
        Returns:
            str: The modified text with a randomly chosen line replaced by "<FILL_ME>".
        """
        lines = text.split('\n')
        if not lines:
            return text
    
        # Choose a random line index
        random_index = random.randint(2, len(lines) - 1)
        
        # Replace the chosen line with <FILL_ME>
        lines[random_index] = "<FILL_ME>"
    
        # Join the lines back into a single string
        return '\n'.join(lines)
    
    def replace_random_lines(self, text):
        """
        Replaces a randomly chosen range of lines in the input text with the string "<FILL_ME>".
    
        Args:
            text (str): The input text containing multiple lines.
    
        Returns:
            str: The modified text with a randomly chosen range of lines replaced by "<FILL_ME>".
        """
        lines = text.split('\n')
        if len(lines) <= 2:
            return text
    
        # Choose two random line indices within the valid range
        random_index_0 = random.randint(2, len(lines) - 1)
        random_index_1 = random.randint(2, len(lines) - 1)
    
        # Ensure the start index is less than the end index
        start_index = min(random_index_0, random_index_1)
        end_index = max(random_index_0, random_index_1)
    
        # Replace the chosen range of lines with <FILL_ME>
        lines[start_index:end_index] = ["<FILL_ME>"]
    
        # Join the lines back into a single string
        return '\n'.join(lines)
    
    def replace_iterations(self, input_string: str, num_iter: int) -> list[str]:
        """
        Performs multiple iterations of string replacements and exports the final strings to .c files.
    
        Args:
            input_string (str): The initial input string to start replacements from.
            num_iter (int): Number of iterations to perform for string replacements.
    
        Returns:
            list[str]: A list of strings after multiple iterations of replacements.
        """
        start_time = time.time()
        input_list = replace_multiple(input_string, 3)
        for i in range(num_iter):
            current_list = []
            for input_str in input_list:
                new = replace_random_lines(input_str)
                multiple_new = replace_multiple(new, random.randint(1, 3))
                current_list.extend(multiple_new)
            input_list = current_list
        #print(datetime.now().strftime("%Y-%m-%d %H:%M:%S"))
        export_strings_to_c_files(input_list, datetime.now().strftime("%Y-%m-%d %H:%M:%S"))
        end_time = time.time()
        #print("Time taken:", end_time - start_time)
    
    def finish_gpt(self, prompt) -> str:
        """
        Generates a completion for a given prompt using OpenAI's GPT model and then requests a debug
        of the generated C program.
    
        This method sends a prompt to the GPT model and generates a completion. It then sends another
        prompt to the GPT model to debug the generated C program and returns the debugged content.
    
        Args:
            prompt (str): The initial prompt to be sent to the GPT model.
    
        Returns:
            str: The content of the debugged C program generated by the GPT model.
    
        Note:
            This method assumes that `self.openai_api_key`, `self.finishing_gpt_model`, and `self.finishing_gpt_context`
            are properly initialized and set.
        """
        client = OpenAI(api_key = self.openai_api_key)
    
        completion = client.chat.completions.create(
        model=self.finishing_gpt_model,
        messages=[
        {"role": "system", "content": self.finishing_gpt_context},
        {"role": "user", "content": prompt}
        ]
        )
        completion2 = client.chat.completions.create(
        model=self.finishing_gpt_model,
        messages=[
        {"role": "system", "content": self.finishing_gpt_context},
        {"role": "user", "content": f"Debug the following C program: \n{completion.choices[0].message}"}
        ]
        )
        result = completion2.choices[0].message.content.replace("```c", "").replace("```", "")
        return result
   
    def generate(self):
        """
        Generates multiple programs using token-by-token generation and exports them to C files.
    
        This method generates a specified number of programs by invoking the `generate_token_by_token`
        method with the initial prompt. The generated programs are then exported to C files in the
        specified export folder.
    
        Args:
            None
    
        Returns:
            None
    
        Note:
            This method assumes that `self.num_programs`, `self.initial_prompt`, and `self.export_folder` are properly
            initialized and set. It also relies on the `generate_token_by_token` and `export_strings_to_c_files` methods
            to be implemented in the class.
        """
        count = 0
        for i in range(self.num_programs):
            newProgram = self.generate_token_by_token(input_string = self.initial_prompt)
            self.export_string_to_c_file(newProgram, self.export_folder, f"file_{str(count).zfill(4)}.c")
            count += 1
            #print(f"{count}/{self.num_programs}")
        #print(f"Wrote {count} files to {self.export_folder}.")
