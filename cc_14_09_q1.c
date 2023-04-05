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
    int x;
    scanf("%d",&x);
    if(x<51)
        printf("LEFT\n");    
    else
        printf("RIGHT\n");
}