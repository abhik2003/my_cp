#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x%3==0)
            printf("0\n");
        else if(x%3==1)
            printf("2\n");
        else 
            printf("1\n");    
    }
    return 0;
}