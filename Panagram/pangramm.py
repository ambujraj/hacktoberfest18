def pangram(string1):
    import string
    count=0
    for i in string.ascii_lowercase:
        if i in string1.lower():
            count=count+1
    if(count==26):
        print("pangram")
    else:
        print("not pangram")
