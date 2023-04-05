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
    int n,i,m;
    scanf("%d%d",&n,&m);
    int a[n+1];
    int b[m+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]%b[1]!=0)
            ans++;
    }
    printf("%d\n",ans);
}    