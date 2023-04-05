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
    int n,i,j,zero=0,ans=0;
    scanf("%d",&n);
    char x[n+1];
    scanf("%s",x);
    for(i=0;i<n-1;i++)
    {
        if(x[i]=='0')
        {
            ans=1;
            break;
        }    

        //     zero=1;
        // if(x[i]=='1' && zero==1)
    }
    int z=0,o=0;
    if(n>=3)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]=='0')
                z++;  
        }
        for(i=1;i<=z;i++)
        {
            printf("0");
        }
        for(;i<=n;i++)
        {
            printf("1");
        }
    }
    else 
        printf("%s",x);
    printf("\n");
}    