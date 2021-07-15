from Functions import *
k=0
a=['1','2','3']
b=['4','5','6']
c=['7','8','9']
print a,'\n',b,'\n',c
Var='X'
i=0
u=[]
while(i<9):
    if i%2==0:
        Var='X'
    else:
        Var='O'
    print 'Player Turn: ',Var
    x=input()
    if x in u or x<1 or x>9 :
        print "Invalid"
    else:
        u.append(x)
        if x<=3:
            a[x-1]=Var
            
        elif x<=6:
            b[x-4]=Var
                        
        elif x<=9:
            c[x-7]=Var
        print a,'\n',b,'\n',c    
        k=col_check(a,b,c)
        k=row_check(a,b,c)
        k=diag_check(a,b,c)
        if k==1:
            break
        i+=1
        if i==9:
            print "DRAW"
         
