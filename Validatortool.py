import re
email_str=input()
x=re.search("^.*@.*$",email_str)
# print(x)
# print(email_str)
if(x):
    print(email_str+" is valid!")
else:
    print(email_str,"is not valid!!")




