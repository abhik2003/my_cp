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
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a=a>c?a:c;
    if(b>=a)
        printf("YES\n");
    else 
        printf("NO\n");    
}    