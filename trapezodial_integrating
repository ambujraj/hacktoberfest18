'''
Trapezoidal integrating method
"fucntion" - fucntion for integration
"range_1"  - lower range
"range_2"  - upper range
"n" - number of steps, accurancy approximation depends on  the "n"
'''
def trapezoidal(function, range_1, range_2, n):
    step = float(range_2 - range_1) / n
    s = 0.0
    s += function(range_1)/2.0
    for i in range(1, n):
        s += function(range_1 + i*step)
    s += function(range_2)/2.0
    return s * step
#range_1 = int(input("Range 1:"))
#range_2 = int(input("Range_2:"))
#n = int(input("n:"))
