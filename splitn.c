#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,one,half,m,complete,ic;
	char B[100009];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&m);
	    one=0;
	   // char B[n+1];
        // printf("Hi");
	    scanf("%s",B);
	    // printf("%c",B[0]);
	    for(i=0;i<n;i++)
	    {
	        // printf("%c .",B[i]);
	        if(B[i] == '1')
	            one++;
	    }
        if(one==0)
            {
                printf("%d\n",n*m);
                continue;
            }    
	    half=(one*m)/2;
	    complete=half/one;
	    ic=half%one;
	    one=0;
	   for(i=0;i<n;i++)
	   {
	       if(B[i]=='1')
	           one++;
	       if(one==ic)
	       {
	        //    one++;
               i++;
	           break;
	       }
	   }
       int count;
       count=1;
       for(;i<n;i++)
       {
        if(B[i]=='1')
            break;
            count++;
       }
	    printf("%d\n",count);
	}
	return 0;
}

