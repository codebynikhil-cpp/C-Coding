str1=input('Enter a multidigit number : ')
for i in range(0,10):
    if str1.count(str(i))!=0:
        print('Number of count of',i,'is',str1.count(str(i)))