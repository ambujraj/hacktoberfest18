#perfect square finder
from math import sqrt
from time import sleep
def square():
    num = int(input("\nEnter a Square number: "))
    a = sqrt(num)
    if num>1000:
        print('\nProcessing...')
        sleep(2)
    else:
        sleep(1)
    if (a-int(a))==0: #checking for decimal point value
        print("\nYour number is a Perfect Square !")
    else:
        print("\nYour number isn't a Perfect Square !")
    ch = input("\nDo you want to check another number [y/n] ? ")
    if ch.lower()=='y':
        square()
    else:
        print("\n\n\t\t\t See you Soon ! ")

print("\t\t----------- Perfect Square Finder ----------- ")
square()
