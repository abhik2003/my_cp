#include<stdio.h>
#include<string.h>
#include<math.h>
#define int long long int
#define max 100001
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
    int a[max],i,n,j,ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    i=0;j=n-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else if(a[i]<a[j])
        {
            a[j]-=a[i];
            i++;
            ans++;
        }
        else 
        {
            a[i]-=a[j];
            j--;
            ans++;
        }
    }
    printf("%lld\n",ans);
}    