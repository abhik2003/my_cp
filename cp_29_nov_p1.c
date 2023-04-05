#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#define int long long int
void test_case(void);
int main()
{
    int t;
    scanf("%lld",&t);
    while(t--)
    {
        test_case();
    }
}
void test_case()
{
    char str[200];
    int n;
    scanf("%lld",&n);
    scanf("%s",str);
    for(int i=0;i<2*n-1;i+=2)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}    