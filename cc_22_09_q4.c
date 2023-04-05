#include<stdio.h>
#include<math.h>
void test_case(void);
void quickSort(char * array, int left,int right)
{
    int i,j,key,l,r,p;
    if(left<right)
    {
        l=left;
        r=right;
        p=left;
        while(l<r)
        {

            if(array[l]<array[r])
            {
                array[l]+=array[r];
                array[r]=array[l]-array[r];
                array[l]-=array[r];
                if(p==l)
                    {
                        p=r;
                        l++;
                    }    
                else 
                    {
                        p=l;
                        r--;
                    }        
            }
            else if (p!=r)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        quickSort(array,left,p);
        quickSort(array,p+1,right);
    }
    return;
}
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
    int n,i,p=0,m=0,j=0;
    scanf("%d",&n);
    char x[n+1],y[n+1];
    scanf("%s",x);
    for(i=0;i<n;i++)
    {
        if(x[i]=='+')
            p++;
        else if(x[i]=='-')
            m++;
        else 
            y[j++]=x[i];     
    }
    quickSort(y,0,j-1);
    for(i=0;i<j-p-m;i++)
    {
        printf("%c",y[i]);
    }
    for(;i<j-m;i++)
    {
        printf("+%c",y[i]);
    }
    for(;i<j;i++)
    {
        printf("-%c",y[i]);
    }
    printf("\n");
}