//B24AD1007 Water Trapping
#include<stdio.h>
void main()
{
    int a[7]= {4,0,0,1,0,1,5},sum=0,i,diff,j,max=0;
    for(i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;a[i]<max;j++)
        {
            diff=a[i]-a[j];
            if(diff>0)
            {
                sum=sum+(diff);
                printf("sum = %d \n",sum);
                
            }
            else if(diff<0)
            {
                goto l;
            }
        
        
        }
        
    }
    l:
    if(a[6]<max)
    {
    
        for(i=6;i>=0;i--)
        {
        
            
            
             for(j=5;a[i]<max;j--)
            {
                    diff=a[i]-a[j];
                    if(diff>0)
                    {
                        sum=sum+diff;
                        printf("sum = %d \n",sum);
                    }
                    else if(diff<0)
                    {
                    goto m;
                    }
            }
            
        }    
            
    }
    m:
    printf("water trapped is %d",sum);
    
}
/* OUTPUT
sum = 4 
sum = 8 
sum = 11 
sum = 15 
sum = 18 
water trapped is 18
*/