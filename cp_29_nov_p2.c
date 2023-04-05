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
    int n,lz;
    lz=-1;
    scanf("%lld",&n);
    char str[n+5];
    scanf("%s",str);
    int arr[n],i,ans=0;
    for (i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    if(str[0]=='0')
        lz=0;
    for(i=1;i<n;i++)
    {
        if(str[i]=='0')
            lz=i;
        if(str[i]=='1' && str[i-1]=='0' && arr[i]<arr[i-1])
        {
            str[i]='0';
            str[i-1]='1';
            lz=i;
            // printf(".%lld.",i);
        }
        else if(str[i]=='1')
        {
            if(lz>=0)
            {
                if(arr[lz]>arr[i])
                {
                    str[i]='0';
                    str[lz]='1';
                    lz=i;
                }
            }
        }
    }    
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
            ans+=arr[i];
    }
    printf("%lld\n",ans);
}    