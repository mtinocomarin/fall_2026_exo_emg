def count_numbers_in_file(file_path):
    count = 0
    try:
        with open(file_path, 'r') as file:
            for line in file:
                elements = line.split()  # Split based on spaces
                for elem in elements:
                    try:
                        float(elem)  # Check if the element is a number
                        count += 1
                    except ValueError:
                        pass  # Ignore non-numeric values
        return count
    except FileNotFoundError:
        print("Error: File not found.")
        return None
    except Exception as e:
        print(f"Error: {e}")
        return None

# Example usage
file_path = input("Enter the file path: ")
count = count_numbers_in_file(file_path)

if count is not None:
    print(f"The file contains {count} numeric elements.")
