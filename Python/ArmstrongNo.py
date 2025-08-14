#Check Armstrong Number


num=int(input("Enter any three digit number:"))
x=num
s=0
while num!=0:
   r=num%10
   s=s+(r*r*r)
   num=num//10
if(x==s):
   print("Is armstrong")
else:
   print("Not armstrong")
