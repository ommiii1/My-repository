#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("Enter elements of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of given elements of array is: %d",sum);
    return 0;
}