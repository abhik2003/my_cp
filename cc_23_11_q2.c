#include<stdio.h>
#include<string.h>
#include<math.h>
#define int long long int
#define max 200001
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
    char str[max];
    scanf("%s",str);
    int n=strlen(str);
    printf("%d",n);
}    