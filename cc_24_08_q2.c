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
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n",(n/2)*((n+1)/2)*2);
        
}    