import serial
import matplotlib.pyplot as plt 
import matplotlib.animation as animation
import numpy as np
import scipy
from scipy import signal


arduino=serial.Serial("COM13",115200)

while True:
    data=arduino.readline()
    data=list(str(data))
    l=len(data)
    del data[l-1],data[l-2],data[l-3],data[l-4],data[l-5],data[0],data[0];
    data=''.join(data)
    print(data)
    data=data.split()
	