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
    int n,i,ans=0,temp=0;
    scanf("%d",&n);
    int p[n-1];
    scanf("%d",&p[0]);
    temp+=p[0];
    for(i=1;i<n-1;i++)
    {
        scanf("%d",&p[i]);
        if(ans<temp)
            ans=temp;
        temp+=p[i];    
        ans+=p[i-1];    
        printf("%d %d\n",ans,temp);
    }
    if(ans<temp)
            ans=temp;
        temp+=p[i]; 
    ans+=p[i-1];
    printf("%d\n",ans);
}