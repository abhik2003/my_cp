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
    int n,x,i,max,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
            even++;
    }
    if(even==n)
        printf("0\n");
    else 
        printf("%d\n",even);    
    printf("%d\n",n-max);


}