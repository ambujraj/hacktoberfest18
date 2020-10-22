
number=input("Please enter a number!")

str_number = str(number)
reversed_str=""
for i in reversed(str_number):

    reversed_str+=i


reversed_number = int(reversed_str)

print("Number:",number)
print("Reversed Number:",reversed_number)
