#include<stdio.h>
int main()
{
    int t,n;
    char str[101];
    char x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",str);
        for(int i=0;i<n;i++)
        {
            if(str[i]=='A')
                x='T';
            else if(str[i]=='T')
                x='A';    
            else if(str[i]=='G')
                x='C';  
            else if(str[i]=='C')
                x='G';          
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
}