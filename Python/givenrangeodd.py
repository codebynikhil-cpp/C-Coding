num1 = int(input('Enter number 1: '))
num2 = int(input('Enter number 2: '))
for i in range(num1, num2 + 1):
    count = 0
    for j in range(1,i+1):
        if i%j==0:
            count+=1
    if count==2:
        print(i)
