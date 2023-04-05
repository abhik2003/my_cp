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
    int a[max],aux[max],i,n,j,ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        aux[i]=0;
    }
    for(i=0;i<n/2;i++)
    {
        if(a[i]>a[n-1-i])
        {
            aux[n-1-i]=a[i]-a[n-1-i];
            ans+=aux[n-1-i];
            // printf("%d",ans);
        }
        else if(a[i]<a[n-1-i])
        {
            aux[i]=a[n-1-i]-a[i];
            ans+=aux[i];
                        // printf("%d",ans);

        }
    }
    for(i=0;i<n-1;i++)
    {
        if(aux[i]>=aux[i+1])
            ans-=aux[i+1];
        else 
            ans-=aux[i];    
    }

    printf("%lld\n",ans);
}    