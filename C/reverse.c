#include<stdio.h>
int main()
{

    int rem,sum=0,rev=0,num;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num>0)
    {
      rev=(rev*10)+(num%10);
      num=num/10;
    }
    printf("Reverse number is: %d",rev);

}