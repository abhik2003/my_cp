#include<stdio.h>
#include<math.h>
void test_case(void);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        test_case();
    }
}
void test_case()
{
    int x,n,t,c,w;
    scanf("%d%d",&n,&x);
    if(x%3==0)
        t=0;
    else if(x%3==1)
        t=3;
    else 
        t=2;
    if((x/3+t)<=n)
    {
        if(t==0)
            {
                c=x/3;
                w=0;
            }
        else 
        {
            c=x/3+1;
            w=t-1;
        }    
        printf("YES\n%d %d %d\n",c,w,n-c-w);
    }            
    else
        printf("NO\n");
}    