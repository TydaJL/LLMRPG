import os

# Define the directory containing the files
directory = './0802-codegen-2_100'

# Define the range of files to keep
keep_files = {f"file_{i:04d}.c" for i in range(250)}

# Iterate over the files in the directory
for file_name in os.listdir(directory):
    file_path = os.path.join(directory, file_name)
    
    # Check if the file is not in the range to keep and is a regular file
    if os.path.isfile(file_path) and file_name not in keep_files:
        os.remove(file_path)
        print(f"Deleted: {file_path}")

