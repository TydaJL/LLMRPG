from transformers import AutoTokenizer, AutoModel
import torch

# Load a pre-trained tokenizer and model
model_name = "../codellama"
tokenizer = AutoTokenizer.from_pretrained(model_name)
tokenizer.pad_token = tokenizer.eos_token
model = AutoModel.from_pretrained(model_name).to(0)

# Sample code snippet
code_snippet = """
#include <stdio.h>

int a() {
    int j;
    int i;
    int arr[2][4];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            arr[i][j] = i + j;
        }
    }

    if (1 + 10 < 10)
        return 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 5 + 10)
                return i % 2;
        }
    }
"""

# Tokenize the input code
tokens = tokenizer(code_snippet, return_tensors="pt", padding=True, truncation=True).to(0)

print(len(tokens))
# Generate vectorized representation
with torch.no_grad():
    outputs = model(**tokens)

# The outputs are in a tuple, we need the last hidden state
# This is a tensor with shape (batch_size, sequence_length, hidden_size)
vectorized_representation = outputs.last_hidden_state

# Convert to a numpy array for further use
#vectorized_representation = vectorized_representation.numpy()

print(vectorized_representation)
print(vectorized_representation.shape)
