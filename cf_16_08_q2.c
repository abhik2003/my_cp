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
    long long int n,k,i,j;
    scanf("%lld%lld",&n,&k);
    if(k%4==0)
        {
            printf("NO\n");
            return;
        }    
    printf("YES\n");
    if(k%2!=0)
    {
        for(i=1;i<=n-1;i+=2)
        {
            printf("%lld %lld\n",i,i+1);
        }
        return;
    }
    for(i=1;i<=n/4;i++)
    {
        printf("%lld %lld\n",((i*4)-1),i*4);
    }
    for(i=2;i<=n;i+=4)
    {
        printf("%lld %lld\n",i,i-1);
    }
    return;
}    