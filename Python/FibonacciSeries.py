#fibonacci series
n=int(input("Enter number of elements to be diplayed: "))
a=0
print(a,end=" ")
b=1
print(b,end=" ")
sum=0
for i in range(0,n-2):
   sum=a+b
   a=b
   b=sum
   print(sum,end=" ")
