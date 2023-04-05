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
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0 || b==0)
        printf("NO\n");
    else if (a%2==1 && b%2==1)
        printf("NO\n");    
    else if(a%2==0 && b%2==0)
        printf("YES\n");
    else if(a==1 || b==1)
        printf("NO\n");
    else     
        printf("YES\n");  
}    