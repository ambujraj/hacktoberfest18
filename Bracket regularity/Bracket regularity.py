T=int(input())
for _ in range(T):
    count=0
    sum1=0
    Str=input()
    l=list(Str)
    length=len(l)
    for i in range(length):
        if l[i]=='(':
            count+=1
        else:
            count-=1
        if count==0:
            sum1+=1
    print(sum1)