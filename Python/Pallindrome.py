
print("Enter the string to check")
t = input("Please enter a string")

if(t == t[::-1]):
  print("The string entered is palindrome")
else:
  print("Not a palindrome")