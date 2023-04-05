#include<stdio.h>
int main()
{
    int t,n,i,j,k,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n],vis_arr[n+1];
        for(i=0;i<n;i++)
        {
            vis_arr[i]=0;
            scanf("%d",&arr[i]);
        }
        vis_arr[i]=0;
        for(i=n-1;i>=0;i--)
        {
            if(vis_arr[arr[i]]==1)
                {
                    // ans=0;
                    break;
                }
            else 
                vis_arr[arr[i]]=1;
            // printf("%d",vis_arr[i]);
        }
        printf("%d\n",i+1);
    }
}