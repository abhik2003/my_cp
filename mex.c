#include<stdio.h>
int main()
{
    int t,n,m,k,i,arr[100],j,temp;
    scanf("%d",&t);
    while(t--)
    {
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
        // for(i=0;i<n;i++)
        //     printf("%d ",arr[i]);
        for(i=0;i<;i++)
        {
            if(arr[i]>=k)
               break;
        }
        // printf("i=%d--",i);
        if (i!=n && arr[i]==k)
            printf("1NO%d-%d-\n",arr[i],k);
        else if (arr[i-1]<k-1)
            printf("2NO\n");
        // else if (arr[i-1]==k-1)   
        // {
        //     for(i=0;i<m;i++)
        // }
        else{
            for(j=0;j<i-1;j++)
            {
                if(arr[j]!=arr[j+1] && arr[j]!=arr[j+1]-1)
                {
                    // printf("3NO|%d|%d|++\n",arr[j],arr[j+1]);
                    break;
                }
            }
            if(j==i-1)
                printf("YES\n");
                //  printf("Y1ES%d %d\n",j,i);
        }

    }
    return 0;
}