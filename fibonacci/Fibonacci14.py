#
# Solution to Fibonacci Using Dynamic Programming
# Author: Rishi Sharma
# Input: x - Integer
# Output: fibonacci(x)
#

f = [0,1,1]

def fib(x):
	if(x<len(f)):
		return f[x]
	else:
		ans = fib(x-1) + fib(x-2)
		f.append(ans)
		return ans


x = int(input())
print(fib(x))
