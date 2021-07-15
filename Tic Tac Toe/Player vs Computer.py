from Functions import *
print 'Computer: X'
a=['1','2','3']         
b=['4','X','6']         
c=['7','8','9']         
print '\n',a,'\n',b,'\n',c,'\n'
t=0
while True:                                                             
    if t%2==0:
        print "Human: O\n"
    else:
        print "Computer: X\n"

    if t%2==0:
        x=input("\nEnter location: \n")

        if x in range(1,10):
            if x<=3:
                if a[x-1]=='X' or a[x-1]=='O':
                    print "Invalid Choice"
                    continue
                a[x-1]='O'
            elif x<=6:
                if b[x-4]=='X' or b[x-4]=='O':
                    print "Invalid Choice"
                    continue
                b[x-4]='O'
            elif x<=9:
                if c[x-7]=='X' or c[x-7]=='O':
                    print "Invalid Choice"
                    continue
                c[x-7]='O'
            print '\n',a,'\n',b,'\n',c,'\n'
            t+=1
            if col_check(a,b,c) or row_check(a,b,c) or diag_check(a,b,c):         
                break
        else:
            print "Invalid Location"

    else:
        if winning_move_ai(a,b,c):
            pass
        elif col_check_ai(a,b,c) or row_check_ai(a,b,c):
            pass
        elif corner_check_ai(a,b,c):
            pass
        else:
            print "\nMatch Drawn "
            break
            
        print '\n',a,'\n',b,'\n',c,'\n'
        t+=1
        if col_check(a,b,c) or row_check(a,b,c) or diag_check(a,b,c):         
            break
    if t==9:                                                                     
        print "\nMatch Drawn "
        break     
