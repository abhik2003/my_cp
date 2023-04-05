#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,a[1001],b[1000],x,i,c[1001],ans,d[1001],j,index;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=1;i<=1001;i++)
	    {
	        a[i]=0;
	        c[i]=0;
	        d[i]=0;
	    }
	    index=0;
	    ans=2;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	        if(i!=0 && b[i]!=b[i-1])
    	        {
    	           // for(j=0;j<index;j++)
        	       // {
        	       //         if(b[i]==d[j])
        	       //             {
        	       //                 ans=0;
        	       //                // printf("x");
        	       //                 break;
        	       //             }         
        	       // }
        	       // if(j==index)
        	       // {
        	       //     index++;
        	       //     d[index]=b[i];
        	       // }
        	       d[b[i-1]]++;
        	       //printf(".%d.d=%d.",b[i-1],d[b[i-1]]);
    	        }     
	        a[b[i]]+=1;
	    }
	    d[b[i-1]]++;
	   // printf(".%d.",b[i-1]);
	    for(i=1;i<=1000;i++)
	    {
	       // printf("%d" ,d[i]);
	       // if(d[i]!=0)
	           // printf("%d ",i);
	        if(d[i]>1)
	            {
	                ans=0;
	               // printf("x%d %d",d[i],i);
	                goto label;
	            }         
	    }
	   // if(ans==0)
	   //     goto label;
	    for(i=0;i<=n;i++)
	    {
	        if(a[i]!=0 && c[a[i]]==1)
	        {
	            ans=0;
	           // printf("%d",t);
	            goto label;
	        }
	        else
	            c[a[i]]=1;
	    }
	    label:
	    if(ans==0)
	        printf("NO\n");
	    else
	        printf("YES\n");
	}
	return 0;
}

