def int2roman(num):
	roman_list = [(1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'), (100, 'C'), (90, 'XC'), (50, 'L'), (40, 'XL'), (10, 'X'), (9, 'IX'), (5, 'V'), (4, 'IV'), (1, 'I')]
    roman = ''
    while number > 0:
        for i, r in numlist:
            while number >= i:
                roman += r
                number -= i
    return roman

#Example
#>>> int2roman(14)
# XIV
