#include<stdio.h>
int main()
{
    int t,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        if((p%100)+(p/100)<=10)
            printf("%d\n",(p%100)+(p/100));
        else 
        printf("-1\n");    
    }
    return 0;
}