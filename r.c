#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<11;i++)
    {for(j=1;j<11;j++)
        {for(k=1;k<11;k++)
        {

            if(i<j)
                printf("%d",i);
            else
                printf("  %d",j); 
            if(j<k)
                printf("  %d",j);
            else
                printf("  %d",k);   
            if(i<k)
                printf("  %d\n",i);
            else
                printf("  %d\n",k);              
        }
        }
    }
}