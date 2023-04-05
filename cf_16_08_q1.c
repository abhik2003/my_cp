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
    long long int m,n;
    scanf("%lld%lld",&m,&n);
    if((m+n)%2==0)
        printf("Tonya\n");
        // Burenka" or "Tonya
    else 
    printf("Burenka\n");    
}    