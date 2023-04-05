#include<stdio.h>
#include<math.h>
#define int long long int
int my_func(int x)
{
    return (x*(x-1))/2;
}
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
    int n,i,ans,count,x,y,eq;
    scanf("%lld",&n);
    int a[n+1],s[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    if(n==1)
    {
        printf("1\n");
        return;
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            s[i]=-1;
        }
        else if(a[i-1]<a[i])
        {
            s[i]=1;
        }
    }
    s[0]=s[1];
    ans=n;
    count=1;
    for(i=1;i<n;i++)
    {
        if(s[i]==-1 && s[i-1]==1)
        {
            ans+=my_func(count);
            count=2;
            if(i==n-1)
            {
                ans+=my_func(count);
            }
        }
        else 
        {
            count+=1;
            if(i==n-1)
            {
                ans+=my_func(count);
            }
        }
    }
    printf("%lld\n",ans);
}    