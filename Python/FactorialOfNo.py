#factorial of a number
num=int(input("Enter any number to check factorial of it: "))
fact=1
for i in range(1,num+1):
   fact=fact*i
print(f"factorial of given number is{fact}")
