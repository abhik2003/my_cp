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
    int n,i,ans=1,neg=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]<0)
            neg++;
        else if(A[i]==0)
            ans=0;    
    }
    if(ans==0)
        printf("0\n");
    else 
        printf("%d\n",neg%2);    
}