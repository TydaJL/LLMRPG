import os
import subprocess
import argparse

def is_executable(file_path):
    """Check if a file is executable."""
    return os.path.isfile(file_path) and os.access(file_path, os.X_OK)

def run_and_count_executables(directory):
    """Run all executable files in the given directory and count the number of error-free executions."""
    error_free_count = 0
    timeout_seconds = 10

    for filename in os.listdir(directory):
        file_path = os.path.join(directory, filename)

        # Check if the file is executable
        if is_executable(file_path):
            try:
                # Run the executable with a timeout
                result = subprocess.run([file_path], check=True, timeout=timeout_seconds)
                
                # If no exception is raised, the execution was successful
                error_free_count += 1

            except subprocess.CalledProcessError:
                print(f"Error occurred while executing {filename}")
            except subprocess.TimeoutExpired:
                print(f"Execution of {filename} timed out")
            except Exception as e:
                print(f"An unexpected error occurred: {e}")

    return error_free_count

if __name__ == "__main__":
    # Parse command-line arguments
    parser = argparse.ArgumentParser(description="Execute all output files and count the number of error-free executions.")
    parser.add_argument("directory", type=str, help="The directory containing the output files.")

    args = parser.parse_args()

    # Get the directory from the command-line arguments
    directory = args.directory

    # Run the executable files and count the error-free ones
    count = run_and_count_executables(directory)
    print(f"Number of error-free executable files: {count}")

