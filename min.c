#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==b|b==c|a==c)
            printf("YES\n");    
        else 
            printf("NO\n");
    }
    return 0;
}