def fib(n):
    a=0
    b=1
    if n<=0:
        print('Invalid !!!')
    elif n==1:
        print(a)
    else:
        print(a)
        print(b)
        for i in range(1,n):
            c=a+b
            if c>=n:
                break
            else:
                print(c)
                a=b
                b=c
n=int(input('enter the limit : '))
fib(n)
