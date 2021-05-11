import serial

ser = serial.Serial('/dev/ttyACM0',9600,timeout=1)
ser.flush()

while True:
    if ser.in_waiting > 0:
        temp = ser.readline().decode('utf-8').rstrip()
        print(temp)