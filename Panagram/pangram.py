import string

def isPangram(s):
	s = s.lower()
	for i in string.ascii_lowercase:
		if not i in s:
			return False
	return True

def main():
	s = input("Enter string: ")
	if isPangram(s):
		print("Yes! It's a pangram.")
	else:
		print("No! It's not a pangram.")

if __name__ == '__main__':
	main()