import serial
import matplotlib as plot
import numpy as np
import time as t
 
pointer = -1
ADCValues = []
timeValues = []
serialP = serial.Serial('COM3',1200)
serialP.close()
serialP.open()

def ADC2Temp(adc):
    x = adc * -0.1097 + 82.002
    format_float = "{:.2f}".format(x)
    return format_float
 
while(1):
    t.sleep(1) #1 second read
    serialP.write(b"s")
    num = 0
    temp = []
    while(num < 2):
        if(serialP.in_waiting > 0):
            stringSerial = serialP.readline() #listening line
            tempValue = ADC2Temp(int(stringSerial.decode('Ascii')))
            temp.append(tempValue)
            print(tempValue) #print readings
            num = num + 1
    #print("HELLO")
    if(pointer==-1):
        ADCValues.append(temp[0])
        timeValues.append(temp[1])
        pointer = pointer + 1
    else:
        if(temp[1] == timeValues[pointer]):
            pointer = pointer + 1
            ADCValues.append(temp[0])
            timeValues.append(temp[1])
     plot(np.empty(len(temp)), temp)
     
