str=input("Enter the string : ")
a = ""
for i in str:
    if i.isupper():
        a += i.lower()
    else:
        a += i.upper() 
print(a)