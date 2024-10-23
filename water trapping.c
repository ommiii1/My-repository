//B24AD1007 Water Trapping
#include<stdio.h>
void main()
{
    int a[7]= {3,0,1,0,4,0,2},sum=0,i,diff,j,max=0;
    for(i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=1;j<6;j++)
        {
            diff=a[i]-a[j];
            if(diff>0)
            {
                sum=sum+(diff);
                
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
    
        for(i=6;i>1;i--)
        {
        
            
            
             for(j=5;j>0;j--)
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