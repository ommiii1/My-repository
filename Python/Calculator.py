#Calculator
count=1
while(count==1):


   a=int(input("1.addition\n2.substraction\n3.multiplication\n4.division\n"))
   if(a==1):
       num1=int(input("Enter variable 1 to add"))
       num2=int(input("Enter variables 2 to add"))
       print("Sum is ",num1+num2)
       count=0
   elif(a==2):
       num1=int(input("Enter variable 1 to substraction"))
       num2=int(input("Enter variables 2 to substraction"))
       print("Sub is ",num1-num2)
       count=0
   elif(a==3):
       num1=int(input("Enter variable 1 to multiply"))
       num2=int(input("Enter variables 2 to multiply"))
       print("multip is ",num1*num2)
       count=0
   elif(a==4):
       num1=int(input("Enter variable 1 to divide"))
       num2=int(input("Enter variables 2 to divide"))
       print("division is ",num1/num2)
       count=0
   else:
       print("\nEnter a valid option\n")
       count=1
