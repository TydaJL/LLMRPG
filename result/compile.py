import os
import subprocess
import argparse

def compile_c_files(directory):
    compiled_files = 0
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith('.c'):
                file_path = os.path.join(root, file)
                output_path = os.path.join(root, file[:-2])  # Remove '.c' extension for output file
                try:
                    subprocess.run(['gcc', file_path, '-o', output_path], check=True)
                    compiled_files += 1
                    print(f'Successfully compiled: {file_path}')
                except subprocess.CalledProcessError as e:
                    print(f'Failed to compile: {file_path}\nError: {e}')
    return compiled_files

def main():
    parser = argparse.ArgumentParser(description='Compile all C files in a directory.')
    parser.add_argument('directory', type=str, help='Path to the directory containing C files.')
    args = parser.parse_args()

    num_compiled_files = compile_c_files(args.directory)
    print(f'Number of successfully compiled C files: {num_compiled_files}')

if __name__ == '__main__':
    main()

