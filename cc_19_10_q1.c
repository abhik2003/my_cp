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
        int n,i;
        scanf("%d",&n);
        char A[n+1],B[n+1];
        int a_freq[26],b_freq[26];
        scanf("%s",A);
        scanf("%s",B);
        for(i=0;i<26;i++)
        {
            a_freq[i]=0;
            b_freq[i]=0;
        }    
        for(i=0;i<n;i++)
        {
            a_freq[A[i]-'a']+=1;
            b_freq[B[i]-'a']+=1;
        }
        for(i=0;i<26;i++)
        {
            a_freq[i]=a_freq[i]>b_freq[i]?b_freq[i]:a_freq[i];

            // b_freq[i]=0;
        }  
        int max_freq=0;
        for(i=0;i<26;i++)
        {
            max_freq=max_freq>a_freq[i]?max_freq:a_freq[i];
        }
        printf("%d\n",max_freq);
}