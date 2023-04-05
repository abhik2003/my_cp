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
    double x,b;
    scanf("%lf",&x);
    int lim,i,ans=0;
    lim=sqrt(4+x)-2;
    for(i=1;i<=lim;i++)
    {
        b=(x-2*i)/(2+i);
    if(floor(b)==b)
        {
            ans=1;
            printf("YES\n");
            break;
        }
    }
    if(ans==0)
        printf("NO\n");
    printf("%d\n",lim);
}