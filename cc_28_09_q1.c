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
    int n,x,i,max;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<=n;i++)
        a[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]+=1;
    }
    max=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d\n",n-max);


}