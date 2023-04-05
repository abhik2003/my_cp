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
    int n,i,k,j,ans;
    scanf("%d",&n);
    int s[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    char v[n+1];
    scanf("%s",v);
    for(i=0,k=0;i<n;i++)
    {
        if(v[i]=='0')
            temp[k++]=s[i];
    }
    ans=temp[0];
    for(i=1;i<k;i++)
    {
        if(temp[i]<ans)
            ans=temp[i];
    }
    printf("%d\n",ans);
}    