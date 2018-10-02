number = int(input("Input a number to generate a list of prime numbers smaller itself: "))

def is_prime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True
print("Prime numbers till ");
print(nummer);
print("\n");
for i in range(2, number+1):
    if is_prime(i):
        print(i)
        print("\n");
    
