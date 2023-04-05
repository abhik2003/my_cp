#include<stdio.h>
#define number 100001
int main()
{
    int t,n,arr[number],c,ans,ans2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans=0;
        ans2=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            scanf ("%d",&c);
            arr[c]+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>ans)
            {
                ans2=ans;
                ans=arr[i];
                // printf("%d",ans);
            }
            else if(arr[i]>ans2)
            {
                ans2=arr[i];
            }
        }
        if(ans2==0)
            printf("%d\n",(ans+1)/2);
        else if((ans+1)/2>ans2)
            printf("%d\n",(ans+1)/2);
        else
            printf("%d\n",ans2);    

    }
}