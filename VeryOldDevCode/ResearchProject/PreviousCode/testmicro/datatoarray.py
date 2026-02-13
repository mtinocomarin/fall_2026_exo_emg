# Python script to read numerical values and save them in a C array format
import numpy as np

# Input and output file names
input_file = r"C:\Users\mtino\OneDrive\Desktop\Personal Projects\ResearchProject\PreviousCode\testmicro\code\datamicro.txt"  # Ensure this file exists in the same directory
output_file = "carray.h"

try:
    # Read the space-separated float values from the file
    with open(input_file, "r") as f:
        data = np.loadtxt(f)  # Load all values as floats

    # Flatten the array if it's multi-dimensional
    data = data.flatten()

    # Convert data into C array format
    c_array_content = f"float carray[{len(data)}] = {{\n    " + ", ".join(map(str, data)) + "\n};\n"

    # Save the C array to a header file
    with open(output_file, "w") as f:
        f.write(c_array_content)

    print(f"C array successfully saved to {output_file}")

except FileNotFoundError:
    print(f"Error: The file '{input_file}' was not found. Please check the file location.")
