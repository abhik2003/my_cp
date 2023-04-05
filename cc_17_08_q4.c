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
    double m,n,x,y,k,l;
    scanf("%lf%lf%lf%lf",&n,&m,&x,&y);
    int yy;
    yy=(int)y;
    if(yy%2==0)
        y=0;
    int xx=(int)x,i,j;     

        for(i=xx;i>0;i-=2)
        {
            for(j=yy;j>0;j-=2)
            {
                k=(double)(m+n+j-2);
                l=(double)(i+j);
                k=k/l;
                // k=(m+n+j-2)/(i+j);    
                if(k==floor(k))
                    {
                        printf("YES\n");
                        return;
                    }   
                    // j=j-2; 
            }
            // i=i-2;
        }

    
    printf("NO\n");    
    return;
}    
