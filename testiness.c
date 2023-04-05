#include<stdio.h>
int main()
{
    int t,a,b,c,d,testiness;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        testiness=0;
        if (a>b)
            testiness+=a;
        else
            testiness+=b;
        if (c>d)
            testiness+=c;
        else
            testiness+=d;
        printf("%d\n",testiness);    
    }
    return 0;
}