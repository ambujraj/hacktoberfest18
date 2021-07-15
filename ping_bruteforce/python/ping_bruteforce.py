# -*- coding: utf-8 -*-
"""
Created on Sun Oct 1 20:22 2017
@author: john2ksonn

!!!Linux only!!!
"""
import os

minVal = 0
maxVal = 225


ipAddressBeginning = "192.168.2." #ip address without the last number

for i in range(minVal, maxVal):
    pingString = "ping -c 1 " + ipAddressBeginning + str(i) + "|grep '0%'"
    print(ipAddressBeginning + str(i))
    os.system(pingString)
    
