#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j,k,mul[3][3];
    printf("Enter values for matrix 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value of element in row %d & col %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter values for matrix 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value of element in row %d & col %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    printf("multiplication is \n");
        
for(i=0;i<3;i++)    
{    
    for(j=0;j<3;j++)    
    {    
        mul[i][j]=0;    
        for(k=0;k<3;k++)    
        {    
            mul[i][j]+=a[i][k]*b[k][j];    
        }    
    }    
}    
    

    

}