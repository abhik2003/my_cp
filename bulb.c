#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,count;
    char mode1[101];
    char mode2[101];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        scanf("%s",mode1);
        scanf("%s",mode2);
        for(int i=0;i<n;i++)
        {
            if(mode1[i]==mode2[i])
                count++;
        }
        if(count%2==0)
            printf("1\n");
        else
            printf("0\n");    
    }
    return 0;
}