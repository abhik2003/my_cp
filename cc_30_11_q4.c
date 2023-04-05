#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#define int long long int
// #define max 2000002
void test_case(void);
int main()
{
    int t;
    scanf("%lld",&t);
    while(t--)
    {
        test_case();
    }
}
void test_case()
{
    int n,x,odd=0,i,ans=0,loss=0;
    scanf("%lld",&n);
    int a[n],b[n],A=0,B=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        A+=a[i];
    }        
    for(i=0;i<n;i++)
    {
        scanf("%lld",&b[i]); 
        B+=b[i];
    }        
    for(i=0;i<n;i++)
    {
        ans+=(A-a[i])*b[i];
    }
    for(i=0;i<n-1;i++)
    {
        if((a[i]*(B-b[i]))>((A-a[i])*b[i]))
        {
            loss+=(A-a[i])*b[i];
        }
        else
        {
            loss+=a[i]*(B-b[i]);
        }
        B-=b[i];
        A-=a[i];
    }
    printf("%lld\n",ans-loss);
}            
    