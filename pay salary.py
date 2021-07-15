inpHours= input('Enter Hours: ')
inpRate= input('Enter Rate: ')
try:
	Hours= float(inpHours)
	Rate= float(inpRate)	
	if Hours>40.0:
		extraHours= Hours-40.0
		Pay=(Hours*Rate)+ (extraHours*1.5)
		print(Pay)
	else :
		Pay= Hours*Rate
		print(Pay)
except:
	print('Error, please enter numeric input')