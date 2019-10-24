def two_sum(targetNumb, ary):
    foundNum = set()
    for num in ary:
        targetValue = targetNumb - num
        if targetValue in foundNum:
            print(targetValue + " + " + num + " = " targetNumb)
            return
        foundNum.add(num)
    return

