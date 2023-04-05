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
    int n,q,i,j,k,index,x,max=0;
    scanf("%d%d",&n,&q);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&index,&x);
        a[index]=x;
        for(j=1;j<n;j++)
        {
            max=(max>(a[j]-a[j+1]))?max:(a[j]-a[j+1]);
        }
        printf("%d",max);
    }

}    