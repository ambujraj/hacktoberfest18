def bubbleSort(alist):
	for passnum in range(len(alist)-1, 0, -1):
		for i in range(passnum):
			if alist[i] > alist[i+ 1]:
				alist[i], alist[i+1] = alist[i+1], alist[i]


alist = []
print('Enter the elements to be sorted: ')
alist = list(map(int,input().split()))

bubbleSort(alist)

print('Sorted list is: ')

for i in range(len(alist)):
	print(alist[i], end = ' ')

