#include<stdio.h>
int main()
{
    int t,n,m,k,i,arr[100],j,temp,count,count1;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d %d %d",&n,&m,&k);
        for(i=0;i<n;i++)
        {
            scanf(" %d",&arr[i]);
        }
        // for(i=0;i<n;i++)
        //     printf("%d ",arr[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;   
                    }    
            }
        }
        for(i=0;arr[i+1]<k && i<n-1;i++)
        {
            if(arr[i]!=arr[i+1] || arr[i]!=arr[i+1]-1)
            {
                count++;
            }
            else 
                count=0;
        }
        if((count==0 && n-i>=m-1) || arr[i]==k)
        {
            printf("NO1\n");
            // count1=0;
            // for(;i<n-1;i++)
            // {
            //     if(arr[i]!=arr[i+1] || arr[i]!=arr[i+1]-1)
            //     {
            //         count1++;
            //     }
            //     else 
            //         count1 =0;
            // }

        }
        else if(n-i<m-count || arr[i]==k)
            printf("NO\n");
        else if(count>=m-1)
            printf("YES1\n");
        else    
            printf("YES %d  %d\n",count,i);
    }
    return 0;
}