#include<stdio.h>
int main ()
{
    int t,n,i,max;
    int x[1000];
    int y;
    scanf("%d",&t);
     for(i=0;i<1000;i++)
        {
            x[i]=0;
        }
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&y);
            x[y]++;
        }
        max =0;
        for(i=0;i<1000;i++)
        {
            if(x[i]>max)
                max=x[i];
            x[i]=0;
        }
        printf("%d\n",n-max);
    }    
    return 0;
}