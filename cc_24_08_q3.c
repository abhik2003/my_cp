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

void test_case(void)
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n],b[n],dif=0,i,j,ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        // scanf("%lld",&a[i]);
        dif+=(a[i]-b[i]);
    if((a[i]-b[i])>0)
    {
        ans+=(a[i]-b[i]);
    }
    }
    if(dif)
        printf("-1\n");
    else 
        printf("%lld\n",ans);   

}    