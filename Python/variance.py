import math as m
n = int(input("Enter the number of terms :"))
lst = []
sum = 0
variance = 0
lst = input("Enter the number with space :").split()
for i in range(n):
    sum += float(lst[i])
mean = sum/n
for i in range(n):
    variance += (float(lst[i])-mean)**2
variance = variance/ n
deviation = m.sqrt(variance)
print("Mean is : ",mean)
print("variance is : ",variance)
print("deviation ",deviation)