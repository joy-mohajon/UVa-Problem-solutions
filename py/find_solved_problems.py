import os
import shutil
import pandas as pd
import re

# Define file paths
excel_file = "D:/PROBLEM Sulotion/uva file maker/solved_problems.xlsx"
folder_path = "D:/PROBLEM Sulotion/uva file maker/UVA"
solved_folder_path = "D:/PROBLEM Sulotion/uva file maker/solved_problems"

# Create the folder for solved problems if it doesn't exist
os.makedirs(solved_folder_path, exist_ok=True)

# Read Excel sheet
df = pd.read_excel(excel_file)

# Extract list of solved problem IDs
solved_problem_ids = df["Problem"].tolist()

# Define regex pattern to extract problem ID
pattern = r'(\d+)'  # Assuming problem ID is a sequence of digits within the filename

# Iterate through files in the folder and its subdirectories
for root, dirs, files in os.walk(folder_path):
    for filename in files:
        # Check if the file is not empty
        if os.path.getsize(os.path.join(root, filename)) > 0:
            # Check if the file is a C or C++ file
            if filename.endswith(".c") or filename.endswith(".cpp"):
                # Extract problem ID from the filename using regex
                match = re.search(pattern, filename)
                if match:
                    problem_id = match.group(0)
                else:
                    # If problem ID is not found, skip this file
                    continue

                # Check if the problem ID is in the list of solved problem IDs
                if int(problem_id) in solved_problem_ids:
                    # New filename format: "uva_" + problem_id + ".cpp"
                    new_filename = f"uva {problem_id}.cpp"

                    # Move the file to the solved problems folder and rename it
                    shutil.move(os.path.join(root, filename), os.path.join(solved_folder_path, new_filename))

print("Solved non-empty C and C++ files have been separated and renamed successfully.")
