#include<stdio.h>
int main()
{
    int t,n,h,m,min,i,temp,j,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&h,&m);
        int alarm[n+1][3];
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&alarm[i][0],&alarm[i][1]);
            alarm[i][2]=alarm[i][0]*60+alarm[i][1];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(alarm[i][2]>alarm[j][2])
                {
                    temp=alarm[i][2];
                    alarm[i][2]=alarm[j][2];
                    alarm[j][2]=temp;
                }
            }
        }
        alarm[n][2]=alarm[0][2]+60*24;    
        min=h*60+m;
        for(i=0;;i++)
        {
            if(alarm[i][2]>=min)
            {
                ans=alarm[i][2]-min;
                printf("%d %d\n",ans/60,ans%60);
                break;
            }
        }
    }
}