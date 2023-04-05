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
    int n,i,ans;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int count[26],ev_count[26],last_ind[26];
    for(i=0;i<26;i++)
    {
        count[i]=0;
        ev_count[i]=0;
        last_ind[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count[s[i]-'a']+=1;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]%2==1)
        {
            printf("NO\n");
            return;
        }
    }
    for(i=0;i<n;i++)
    {
        if(last_ind[s[i]-'a']==-1)
            last_ind[s[i]-'a']=i;
        else if((i-last_ind[s[i]-'a'])%2==0)
        {
            last_ind[s[i]-'a']=i;
            ev_count[s[i]-'a']+=1;
        }   
        else
            last_ind[s[i]-'a']=i;
    }    
    for(i=0;i<26;i++)
    {
        if(ev_count[i]%2==1)
        {
            printf("NO2\n");
            return;
        }
    }
    printf("YES\n");
}    