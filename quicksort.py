def quicksort(arr):
    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[-1]
        for x in array:
            if x < pivot:                less.append(x)
            if x == pivot:               equal.append(x)
            if x > pivot:                greater.append(x)

    return quicksort(less) + equal + quicksort(greater) 
