def filehandling():
    f=open("test.txt", 'w')
    f.write("file handling first program")
    f.write("if a file open in write mode it does not exists")
    f.close()
    f1 = open("test.txt", "a")
    f1.write("Adding the content")
    f1.close()
