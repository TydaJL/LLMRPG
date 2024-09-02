# Large Language Model-based Randomized Program Generator (LLMRPG)

LLMRPG (Large Language Model-based Randomized Program Generator) is a program generator that harnesses open-source large language models (LLMs) fine-tuned for code generation to generate error-free, executable, and human-like programs on demand.

# Setup Instructions

Download your models from huggingface. You may download it locally (recommended) or use the cache option.

## Recommended Models

The following models are tailored toward code generation or have been tested to have successful code generation and you may find greater success with the following models:
- [codellama-7b](https://huggingface.co/meta-llama/CodeLlama-7b-hf)
- [Meta-Llama-3.1-8B] (https://huggingface.co/meta-llama/Meta-Llama-3.1-8B)
- [codegen2-7B] (https://huggingface.co/Salesforce/codegen2-7B_P)
- [codegemma-7b](https://huggingface.co/google/codegemma-7b)

A CPU/GPU with greater than 14GB of memory is required, or a predownloaded Codellama model is required due to the size of the Codellama model.

# How to Use LLMRPG

You must have both a [Huggingface user access token] (https://huggingface.co/docs/hub/en/security-tokens) and an [OpenAI API Key] (https://openai.com/api/) to use LLMRPG.

Use the yaml config file located at `config.yaml` to configure your preferences for code generation.

The following is a list of settings, their variable types, and a description of the variable:

### API_KEYS
- **HUGGINGFACE_API_KEY**: `string`  
  - Description: Huggingface API Key for accessing Huggingface models.
- **OPENAI_API_KEY**: `string`  
  - Description: OpenAI API Key for completing and debugging programs at the end of the generation phase.

### generation_settings
- **excluded_tokens**: `list of strings`  
  - Description: Tokens to be excluded from the generated C code (e.g., `"//"`, `"/*"`, `"*/"`, `"scanf"`).
- **finishing_gpt_context**: `string`  
  - Description: Context provided to the GPT model during the final completion and debugging phase.
- **finishing_gpt_prompt**: `string`  
  - Description: The prompt given to the GPT model to complete and debug the generated C program.
- **finishing_gpt_model**: `string`  
  - Description: Model name for the final stage of program completion and debugging.
- **initial_prompt**: `string`  
  - Description: The initial prompt for generating the C program.
- **num_generator_choices**: `int`  
  - Description: Number of program choices the local model outputs.
- **num_lines**: `int`  
  - Description: Number of lines in each generated C program.
- **num_programs**: `int`  
  - Description: Total number of programs to generate.
- **num_tokens**: `int`  
  - Description: Number of tokens to generate per program.
- **tokens_per_generation**: `int`  
  - Description: Number of tokens generated per call to the generation function.
- **top_k**: `int`  
  - Description: Number of highest-probability vocabulary tokens to keep for sampling.
- **lower_top_p**: `float`  
  - Description: Lower bound for top-p sampling. Only tokens with a cumulative probability up to this value are considered.
- **upper_top_p**: `float`  
  - Description: Upper bound for top-p sampling. If the highest probability exceeds this value, the token is automatically selected.
- **rank**: `int`  
  - Description: GPU rank to use for generation.
- **repetition_penalty**: `float`  
  - Description: Penalty for repeating tokens during generation.
- **seed**: `int or None`  
  - Description: Seed for random number generation. Set to `None` for a random seed or an integer for a fixed seed.
- **use_llm_if_no_main**: `bool`  
  - Description: If `True`, uses the local LLM to generate 50 more tokens with a `main` function if not initially present. If `False`, it stops generation.

### device_settings
- **device**: `int`  
  - Description: CUDA/GPU device to use for generation.
- **alternate_device**: `string`  
  - Description: Alternate device to use, such as 'cpu'.

### display_settings
- **show_probabilities**: `bool`  
  - Description: Whether to display token probabilities during generation.
- **show_tokens**: `bool`  
  - Description: Whether to show token IDs during generation (for debugging purposes).
- **show_shape**: `bool`  
  - Description: Whether to display tensor shapes during generation (for debugging purposes).

### model_path
- **model_path**: `string`  
  - Description: Path to the local LLM model.

### output
- **use_timestamps**: `bool`  
  - Description: Whether to use timestamps for export filenames.
- **export_folder**: `string`  
  - Description: Name of the folder to export generated programs. If `use_timestamps` is `False`, the programs are saved directly in this folder.

Finally, execute `python3 llmrpg.py` to generate your programs!

# Evaluation Results

![Summary of Model Performance on Selected Metrics](https://github.com/TydaJL/LLMRPG/blob/main/performance.png?raw=true)

![PCA Plot of Program Vector Embeddings Across Models](https://github.com/TydaJL/LLMRPG/blob/main/pca.png?raw=true)

See pcaplots.ipynb for a more detailed analysis.

Written by [Tyler Lam](https://github.com/TydaJL)
