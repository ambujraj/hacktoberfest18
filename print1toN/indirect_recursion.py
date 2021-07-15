"""Script to print 1 to N using indirect recursion in Python3"""

def printer1(n):
    if n >= 1:
        print(n)
        printer2(n-1)


def printer2(n):
    if n >= 1:
        print(n)
        printer1(n-1)


if __name__ == "__main__":
    n = int(input("Enter a natural number: "))
    printer1(n)
