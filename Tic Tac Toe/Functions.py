def col_check(a,b,c):                  
    for i in range(3):
        if a[i]==b[i]==c[i]:
            print a[i]," is Winner"
            return 1
            break


def row_check(a,b,c):                           
    for i in range(1):
        if a[i]==a[i+1]==a[i+2]:                
            print a[i]," is Winner"
            return 1
            break
        elif b[i]==b[i+1]==b[i+2]:
            print b[i]," is Winner"
            return 1
            break
        elif c[i]==c[i+1]==c[i+2]:             
            print c[i]," is Winner"
            return 1
            break


def diag_check(a,b,c):
    i=0
    if a[i]==b[i+1]==c[i+2]:
        print a[i]," is Winner"
        return 1
    elif c[i]==b[i+1]==a[i+2]:
        print c[i]," is Winner"
        return 1


def col_check_ai(a,b,c):
    for i in range(3):
        if a[i]==b[i]=='O'and c[i]!='X'and c[i]!='O':
            c[i]='X'
            return 1
        elif b[i]==c[i]=='O'and a[i]!='X'and a[i]!='O':
            a[i]='X'
            return 1
        elif a[i]==c[i]=='O'and b[i]!='X'and b[i]!='O':
            b[i]='X'
            return 1
    return 0


def row_check_ai(a,b,c):
    k=[a,b,c]
    for i in k:
        if i[1]==i[2]=='O'and i[0]!='X'and i[0]!='O':
            i[0]='X'
            return 1
        elif i[0]==i[2]=='O'and i[1]!='X'and i[1]!='O':
            i[1]='X'
            return 1
        elif i[1]==i[0]=='O' and i[2]!='X'and i[2]!='O':
            i[2]='X'
            return 1
    return 0


def corner_check_ai(a,b,c):
    if a[0]!='X'and a[0]!='O':
        a[0]='X'
        return 1
    elif c[0]!='X'and c[0]!='O':
        c[0]='X'
        return 1
    elif a[2]!='X'and a[2]!='O':
        a[2]='X'
        return 1
    elif c[2]!='X'and c[2]!='O':
        c[2]='X'
        return 1
    else:
        return 0


def winning_move_ai(a,b,c):
    k=[a,b,c]
    for i in k:
        if i[1]==i[2]=='X'and i[0]!='X'and i[0]!='O':
            i[0]='X'
            return 1
        elif i[0]==i[2]=='X'and i[1]!='X'and i[1]!='O':
            i[1]='X'
            return 1
        elif i[1]==i[0]=='X' and i[2]!='X'and i[2]!='O':
            i[2]='X'
            return 1
    for i in range(3):
        if a[i]==b[i]=='O'and c[i]!='X'and c[i]!='O':
            c[i]='X'
            return 1
        elif b[i]==c[i]=='O'and a[i]!='X'and a[i]!='O':
            a[i]='X'
            return 1
        elif a[i]==c[i]=='O'and b[i]!='X'and b[i]!='O':
            b[i]='X'
            return 1
    if a[0]==b[1] and c[2]!='X'and c[2]!='O':
        c[2]='X'
        return 1
    elif c[0]==b[1] and a[2]!='X'and a[2]!='O':
        a[2]='X'
        return 1
    elif c[2]==b[1] and a[0]!='X'and a[0]!='O':
        a[0]='X'
        return 1
    elif a[2]==b[1] and c[0]!='X'and c[0]!='O':
        c[0]='X'
        return 1
    return 0
