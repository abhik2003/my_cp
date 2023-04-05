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
    int a,b,c,ans=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0)
        {
            ans++;
            a--;
        }    
    if(b>0)
        {
            ans++;
            b--;
        } 
    if(c>0)
        {
            ans++;
            c--;
        } 
    if(a>0 && b>0)
        {
            ans++;
            a--;
            b--;
        }   
    if(c>0 && b>0)
        {
            ans++;
            c--;
            b--;
        }    
    if(a>0 && c>0)
        {
            ans++;
            a--;
            c--;
        }      
    printf("%d\n",ans);

}