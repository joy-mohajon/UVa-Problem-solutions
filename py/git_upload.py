import os
import subprocess

# Define file paths
solved_folder_path = "D:/PROBLEM Sulotion/uva file maker/solved_problems"
excluded_folder_path = "D:/PROBLEM Sulotion/uva file maker/UVa-Problem-solutions"

# Change directory to the folder containing solved problem files
os.chdir(solved_folder_path)

# List all files in the directory
files = os.listdir()

# List files to exclude
excluded_files = set(os.listdir(excluded_folder_path))

# Iterate through each file
for file in files:
    # Check if the file is a regular file (not a directory) and not in excluded files
    if os.path.isfile(file) and file not in excluded_files:
        # Commit the file with its name as the commit message
        subprocess.run(['git', 'add', file])
        subprocess.run(['git', 'commit', '-m', f"added {file}"])

# Push changes to remote repository
subprocess.run(['git', 'push', 'origin', 'main'])
