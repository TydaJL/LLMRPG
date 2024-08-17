# Large-Scale Randomized Program Generation with Large Language Models (LSRPG)

LSRPG mass generates many programs on demand.

# Setup Instructions

Download your models from huggingface. You may download it locally (recommended)or use the cache option

## Recommended Models

The following models are tailored toward code generation and you may find greater success with the following models:
- [codellama-7b](https://huggingface.co/meta-llama/CodeLlama-7b-hf)
- [codegemma-7b](https://huggingface.co/google/codegemma-7b)

A CPU/GPU with greater than 14GB is required, or a predownloaded Codellama model is required due to the size of the Codellama model.

# How to Use LSRPG

Use the yaml config file located at `config.yaml` to configure your preferences for code generation.

Finally, execute `python3 lsrpg.py` to generate your programs!

# Evaluation Results

Written by [Tyler Lam](https://github.com/TydaJL)
