import serial
import struct
import re
import time

# Serial Port Configuration (Update with your STM32 port)
SERIAL_PORT = "COM5"  # Change for Linux/macOS: "/dev/ttyUSB0" or "/dev/ttyACM0"
BAUD_RATE = 115200

def send_floats(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()

        # Extract floating-point numbers (including negative values) using regex
        numbers = re.findall(r"-?\d+\.\d+", content)  # Matches floats like -0.119478

        if len(numbers) == 0:
            print("Error: No numbers found in the file.")
            return

        print(f"Sending {len(numbers)} floating-point numbers to STM32...")

        # Open Serial Port
        with serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1) as ser:
            for num in numbers:
                float_value = float(num)  # Convert string to float
                data_packet = struct.pack('f', float_value)  # Pack float into 4 bytes
                ser.write(data_packet)  # Send as binary
                time.sleep(0.001)  # Small delay to prevent buffer overflow
            
            print("Data transfer complete.")
    
    except FileNotFoundError:
        print("Error: File not found.")
    except serial.SerialException as e:
        print(f"Serial Error: {e}")

# Example usage
file_path = input("Enter the file path: ")
send_floats(file_path)
