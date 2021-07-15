def factor():
    x = int(input("enter the number"))
    max =0
    for i in range(2,x):
        if x%i == 0:
             print(i)
             if i >max:
               max = i
             x = x/i
    print('max',str(max))
    
    # Not for low proceessor computers 
