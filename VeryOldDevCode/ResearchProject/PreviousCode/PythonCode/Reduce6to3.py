import os

def remove_last_3_columns_in_folder(folder_path):
    """
    Recursively traverses a folder, finds all .txt files,
    and removes the last 3 columns from each line in each file.
    Overwrites the original files.
    """
    for root, dirs, files in os.walk(folder_path):
        for file_name in files:
            if file_name.lower().endswith(".txt"):
                file_path = os.path.join(root, file_name)

                # Read all lines from the file
                with open(file_path, 'r', encoding='utf-8') as f:
                    lines = f.readlines()

                # Process each line: split, keep first N columns, re-join
                new_lines = []
                for line in lines:
                    # Split by any whitespace
                    columns = line.strip().split()
                    # Keep only the first columns you want (e.g., first 3)
                    new_columns = columns[:3]
                    # Re-join them with a space or tab
                    new_line = "\t".join(new_columns)
                    new_lines.append(new_line + "\n")

                # Write the modified lines back to the same file
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.writelines(new_lines)

if __name__ == "__main__":
    # Set the path to your 'data' folder here.
    data_folder = r"C:\Users\mtino\OneDrive\Desktop\Personal Projects\ResearchProject\PreviousCode\microcontroller\data"
    remove_last_3_columns_in_folder(data_folder)
    print("Done removing last 3 columns from all .txt files.")
