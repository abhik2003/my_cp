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
    int n,i,one=0,zero=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i%n]==a[(i-1)%n])
        {
            if(a[i%n]==0)
                zero++;
            else 
                one++;    
        }

    }
    int ans=zero>one?one:zero;
    if(ans%2==0)
        printf("Bob\n");
    else 
        printf("Alice\n");    
        
}    