def prime(a):
    count=0
    for i in range(2,a):
        if(a%i==0):
            count=str(a)+"is not prime"
            return(count)
    print("prime")
