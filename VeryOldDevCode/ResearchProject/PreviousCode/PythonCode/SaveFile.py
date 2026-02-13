import serial
import time

def main():
    # Serial port configuration
    port = "COM5"         # Change this to your port name, e.g., '/dev/ttyUSB0' on Linux
    baud_rate = 115200
    timeout = 1           # Timeout in seconds

    # Open the serial port
    try:
        ser = serial.Serial(port, baud_rate, timeout=timeout)
        print(f"Opened serial port {port} at {baud_rate} baud.")
    except serial.SerialException as e:
        print(f"Error opening serial port {port}: {e}")
        return

    # Open the file in write mode to save the data
    with open("adc_data.txt", "w") as file:
        print("Saving data to adc_data.txt. Press Ctrl+C to stop.")
        try:
            while True:
                # Read a line from the serial port
                line = ser.readline().decode('utf-8', errors='replace').strip()
                if line:
                    print(line)  # Optional: Print to console for debugging
                    file.write(line + "\n")
                    file.flush()  # Ensure data is written immediately
                else:
                    # If no data is received, wait a short while before retrying
                    time.sleep(0.01)
        except KeyboardInterrupt:
            print("Data logging stopped by user.")
        finally:
            ser.close()
            print("Serial port closed.")

if __name__ == '__main__':
    main()
