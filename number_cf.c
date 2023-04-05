#include<stdio.h>
int main()
{
    int t,n,x,ans,index;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x=9;
        ans=0;
        index=1;
        if(n==45)
        {
            // ans=123456789;
            printf("123456789\n");
        }
        else
        {
            while(n>=x)
            {
                ans+=index*x;
                index*=10;
                n=n-x;
                x--;
            }
            ans+=index*n;
            printf("%d\n",ans);

        }
    }
}