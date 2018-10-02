#!/usr/bin/env python3

def is_perfect_square(n):
    x = n // 2
    y = set([x])
    while x * x != n:
        x = (x + (n // x)) // 2
        if x in y:
            return False
        y.add(x)
    return True

print("Enter number: ")
n = int(input())

if is_perfect_square(n):
    print("The number is a perfect square")
else:
    print("The number is NOT a perfect square")
