def heapify(arr, n, i): 
    largest = i
    l, r = 2 * i + 1, 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r

    if largest != i:
        arr[largest], arr[i] = arr[i], arr[largest]
        heapify(arr, n, largest)

def heapSort(arr, n):
    for i in range(n, -1, -1): 
        heapify(arr, n, i) 

    for i in range(n - 1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]
        heapify(arr, i, 0) 

arr = []
n = int(input())
for i in range(n):
    curr = int(input())
    arr.append(curr)

heapSort(arr, n)

print("Sorted array: ")
for i in range(n):
    print(arr[i], end = " ")
