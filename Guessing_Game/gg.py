import random

number=random.randint(1,10)
MAX_ATTEMPTS=5
attempts=0
win=False

print("Let's play!")
while attempts < MAX_ATTEMPTS and not win:
    print("Introduce a number between 1 and 10")
    guess=input()
    if guess == number:
        win=True
    elif guess < number:
        print("Too small!")
        attempts+=1
    else:
        print("Too big!")
        attempts+=1

if attempts==MAX_ATTEMPTS:
    print("You lost!")
else:
    print("You won!")
