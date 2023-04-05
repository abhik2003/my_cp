#include<stdio.h>
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
void test_case(void)
{
    int k,n,i,x,ans=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&x);
        if(x>k)
            ans++;
    }
    for(i=k;i<n;i++)
    {
        scanf("%d",&x);
    }
    printf("%d\n",ans);
}