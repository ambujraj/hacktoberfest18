#simple math calculator
def addition(x, y):
    return x + y

def subtraction(x, y):
    if x > y:
        return x - y
    if y > x:
        return y - x

def multiplication(x, y):
    return x * y

def division (x, y):
    if y == 0:
        print("cannot divide by zero")
    else:
        return x / y
