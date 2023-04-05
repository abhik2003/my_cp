#include<stdio.h>
#include<math.h>
#include<string.h>
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
    int n,i,j;
    scanf("%d",&n);
    int c[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=1;i<n;i++)
    {
        if(c[i]>c[0])
        {
            printf("%d\n",i);
            for(j=0;j<i;j++)
            {
                printf("%d ",c[j]);
            }
            printf("\n%d\n",n-i);
            for(j=i;j<n;j++)
            {
                printf("%d ",c[j]);
            }
            printf("\n");
            return;
        }
    }
    printf("-1\n");
}