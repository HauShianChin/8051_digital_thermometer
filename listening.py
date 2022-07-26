import serial
import matplotlib as plot
import matplotlib.pyplot as plt
import numpy as np
import time as t
import datetime as dt #https://www.geeksforgeeks.org/get-current-date-and-time-using-python/
import matplotlib.animation as animation


pointer = -1 #position of all indicies 
ADCValues = [] #8051 export values
timeValues = [] #time
serialP = serial.Serial('COM4',1200)
serialP.close()
serialP.open()
 
def ADC2Temp(adc):
    x = adc * -0.1097 + 82.002
    format_float = "{:.2f}".format(x)
    return format_float

fig = plt.figure()
ax = fig.add_subplot(1, 1, 1)

#listens to the line and decodes from ascii. 
def readnUpdate():
    stringSerial = serialP.readline() #listening line
    floatTempVal = int(stringSerial.decode('Ascii'))
    tempValue = ADC2Temp(floatTempVal)
    return tempValue

def catchup():
    
    catchup = []
    for i in range(100):
        catchup[i] = float(readnUpdate())
        #discuss about how catch up would work and use check and match to re assure data intergerity 
    return catchup

def animate(i, timeValues, ADCValues,pointer ):
    
    #print(timeValues)
    #print(ADCValues)
    #t.sleep(1) #1 second reading time
    serialP.write(b'e') #write serial char e for enter for 8051 to send buffer
    #8051 will send all buffer and clear it after reading this command
    num = 0
    tempStorage = 0
    if(serialP.in_waiting > 0):
        value = readnUpdate() 
        tempStorage = value#append temperature value into temperature array
        print(value) #print readings
    elif(serialP.in_waiting > 3):
        serialP.write(b'a')
        ADCValues.append(catchup())
        
    ADCValues.append(float(tempStorage))  
    timeValues.append(dt.datetime.now().strftime('%H:%M:%S'))
    
        
    #axis restriction 
    timeValues = timeValues[-20:]
    ADCValues = ADCValues[-20:]
    ax.clear()
    ax.plot(timeValues,ADCValues)

    # Format plot
    plt.xticks(rotation=45, ha='right')
    plt.subplots_adjust(bottom=0.30)
    plt.title('temp vs time')
    plt.ylabel('Temperature (deg C)')
    axes = plt.gca()
    axes.set_ylim([0,60])


ani = animation.FuncAnimation(fig, animate, fargs=(timeValues, ADCValues,pointer), interval=1000)
plt.show()
