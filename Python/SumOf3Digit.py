#sum of three digit numbers
a = int(input("Enter any three digit no.: "))
temp=a
sum=0
for i in range(0,3):
    rem=temp%10
    sum=sum+rem
    temp=temp//10
print(sum,"\n")


