#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define int long long int
struct node 
{
    int max_left,max_right,maxsum;
};
int max_subarray_left(int * ip_array,int n);
int max_subarray_right(int * ip_array,int n);

int find_max_crossing_subarray(int * ip_array,int low,int mid,int high)
{
    double leftsum=-INFINITY,right_sum=-INFINITY;
    int sum=0,i,max_left,max_right,j;
    for(i=mid;i>=low;i--)
    {
        sum+=ip_array[i];
        if(sum>leftsum)
        {
            leftsum=sum;
            max_left=i;
        }
    }
    sum=0;
    for(j=mid+1;j<=high;j++)
    {
        sum+=ip_array[j];
        if(sum>right_sum)
        {
            right_sum=sum;
            max_right=j;
        }
    }
    struct node* op;
    op=(struct node *)malloc(sizeof(struct node));
    op->max_left=max_left;
    op->max_right=max_right;
    op->maxsum=leftsum+right_sum;  

    return op->maxsum;
}

int find_max_subarray(int * ip_array,int low,int high)
{
    struct node* op;
    int left,right,cross;
    op=(struct node *)malloc(sizeof(struct node));
    if(high==low)
    {
        op->max_left=low;
        op->max_right=high;
        op->maxsum=ip_array[low];
        return op->maxsum;
    }
    else
    {
        int mid = (low+high)/2;
        left=find_max_subarray(ip_array,low,mid);
        right=find_max_subarray(ip_array,mid+1,high);
        cross=find_max_crossing_subarray(ip_array,low,mid,high);

        if(left>=right && left>=cross)
            return left;
        else if (right>=left && right>=cross)    
            return right;
        else 
            return cross;    
    }
}
void test_case(void);
int main()
{
    int t;
    scanf("%lld",&t);
    while(t--)
    {
        test_case();
    }
}

int max_subarray_left(int * ip_array,int n)
{
    int maxsum=ip_array[0];
    int i,j,sum,m,l;
    sum=0;
    for(j=0;j<n;j++)
    {
        sum+=ip_array[j];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    return maxsum;
}
int max_subarray_right(int * ip_array,int n)
{
    int maxsum=ip_array[n-1];
    int i,j,sum,m,l;
    sum=0;
    for(j=n-1;j>=0;j--)
    {
        sum+=ip_array[j];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    return maxsum;
}
void test_case()
{
    int n,i;
    scanf("%lld",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    int m;
    scanf("%lld",&m);
    int arr2[m+1],pos=0;
    for(i=0;i<m;i++)
    {
        scanf("%lld",&arr2[i]);
        if(arr2[i]>0)
            pos+=arr2[i];
    }
    int left,right,cross,ans;
    left=max_subarray_left(arr,n);
    right=max_subarray_right(arr,n);
    cross=find_max_subarray(arr,0,n-1);
    if(left>right)
    {
        ans=left+pos;
    }
    else 
    {
        ans=right+pos;
    }
    if(ans>cross)
        printf("%lld\n",ans);
    else 
        printf("%lld\n",cross);    

    // printf("%lld   %lld  %lld",max_subarray_left(arr,n),max_subarray_right(arr,n),find_max_subarray(arr,0,n-1));
}    