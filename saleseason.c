#include<stdio.h>
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
    int x;
    scanf("%d",&x);
    if(x<=100)
        printf("%d\n",x);
    else if(x<=1000)
        printf("%d\n",x-25);
    else if(x<=5000)
        printf("%d\n",x-100);    
    else 
        printf("%d\n",x-500);
}