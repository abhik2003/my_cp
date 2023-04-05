#include<stdio.h>
#include<math.h>
#include<string.h>
int vowel(char x);
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
int vowel(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        return 1;
    }
    else 
    return 0;
}
void test_case()
{
    char s[1005];
    scanf("%s",s);
    int i,l;
    l=strlen(s);
    // printf("%d",l);
    for(i=0;i<=l-3;i++)
    {
        if(vowel(s[i])&& vowel(s[i+1]) && vowel(s[i+2]))
        {
            printf("Happy\n");
            return;
        }
    }
    printf("Sad\n");
    return;
}    