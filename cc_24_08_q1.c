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
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x||w==y||w==z||w==x+y||w==y+z||w==z+x||w==x+y+z)
        printf("YES\n");
    else printf("NO\n");    
}    