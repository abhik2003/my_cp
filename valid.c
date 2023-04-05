#include<stdio.h>
#define number 100000
#define max 30
#define min 1

void merge(int * array, int left,int right,int middle)
{
    int i,j=middle+1,k=left,temp[number];
    for(i=left;i<=right;i++)
    {
        temp[i]=array[i];
    }
    i=left;
    while (i<=middle && j<=right)
    {
        if(temp[i]<temp[j])
        {
            array[k]=temp[i];
            k++;
            i++;
        }
        else
        {
            array[k]=temp[j];
            k++;
            j++;
        }
    }
    while(i<=middle)
    {
        array[k]=temp[i];
        k++;
        i++;
    }
    while(j<=right)
    {
        array[k]=temp[j];
        k++;
        j++;
    }
    return;
    
}
void mergeSort(int * array, int left,int right)
{      
    if(left<right)
    {
        int middle=left+(right-left)/2;
        mergeSort(array,left,middle);
        mergeSort(array,middle+1,right);
        merge(array,left,right,middle);
    }
    return;
}
int main()
{
    int t,n,arr[number],c,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        mergeSort(arr,0,n-1);
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
                c++;
            else{
                if(c>ans)
                    ans=c;
                c=0;    
            }    
        }
    }
}