import serial

# Configuration
serial_port = "COM5"  # Change based on your system
baud_rate = 115200
output_file = "data_received_voltage.txt"

# ADC Parameters
V_REF = 3.0  # Reference voltage of the EMG sensor
ADC_MAX = 4095  # Maximum ADC value for a 12-bit ADC

# Open the serial port
ser = serial.Serial(serial_port, baud_rate, timeout=1)
print(f"Serial port {serial_port} opened at {baud_rate} baud.")

# Open a file to save data
with open(output_file, "w") as file:
    print(f"Listening on {serial_port}... Press Ctrl+C to stop.")
    
    # Write the header
    file.write("ADC1, ADC2, ADC3, Voltage1(V), Voltage2(V), Voltage3(V)\n")

    try:
        while True:
            # Read a line of data
            line = ser.readline().decode("utf-8").strip()  
            
            if line:
                print(f"Received: {line}")

                # Split the received ADC values (assuming "1234, 2345, 3456")
                try:
                    adc_values = [int(x) for x in line.split(",")]
                    
                    # Ensure exactly 3 values were received
                    if len(adc_values) == 3:
                        # Convert ADC to Voltage
                        voltages = [(adc / ADC_MAX) * V_REF for adc in adc_values]
                        
                        # Print voltage values
                        print(f"Voltages: {voltages[0]:.3f}V, {voltages[1]:.3f}V, {voltages[2]:.3f}V")
                        
                        # Save both ADC and voltage values to file
                        file.write(f"{adc_values[0]}, {adc_values[1]}, {adc_values[2]}, "
                                   f"{voltages[0]:.3f}, {voltages[1]:.3f}, {voltages[2]:.3f}\n")

                except ValueError:
                    print(f"Warning: Could not parse line '{line}'")

    except KeyboardInterrupt:
        print("\nStopped by user.")

    finally:
        ser.close()
        print("Serial port closed.")
