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
    int n,one=0,sum=0,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x==1)
            one++;
        sum+=x;    
    }
    if(one!=0)
        {
            printf("CHEF\n");
        }
    else if((sum-2*n)%2==0)
        printf("CHEF\n");
    else 
        printf("CHEFINA\n");   

}    