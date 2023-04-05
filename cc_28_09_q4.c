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
    float x,y,f,t,ans,m,n;
    scanf("%f%f",&x,&y);
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    f=y/x;
    if(f!=floor(f))
    {
            printf("NO\n");
            return;
    }
    ans=log10(x)/log10(f);
    if(ans==floor(ans))
    {
            printf("YES\n");
            return;
    }
    m=log10(y)/log10(x);
    if(m==floor(m))
    {
        printf("YES\n");
        return;
    }    
    f=2;
    while(1)
    {
        m=log10(x)/log10(f);
        n=log10(y)/log10(f);
        if(m==floor(m) && n==floor(n))
        {
            printf("YES\n");
            return;
        }
        f=f+1;
        if(m<2 || n<2)
        {
            printf("NO\n");
            return;
        }
    }
    
}    
