#include<stdio.h>
#include<math.h>

void merge(long long int * array, long long int left,long long int right,long long int middle)
{
    long long int i,j=middle+1,k=left,temp[1000000];
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
void mergeSort(long long int * array, long long int left,long long int right)
{      
    if(left<right)
    {
        long long int middle=left+(right-left)/2;
        mergeSort(array,left,middle);
        mergeSort(array,middle+1,right);
        merge(array,left,right,middle);
    }
    return;
}
void test_case(void);
long long int gcd(long long int n1,long long int n2);
long long int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        test_case();
        // gcd()
    }
    
}
long long int gcd(long long int n1,long long int n2)
{
    if(n1%n2==0)
        return n2;
    return (n2,n1%n2);    
}
void test_case(void)
{
    long long int n,i,k,j,ans,temp;
    scanf("%lld",&n);
    long long int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&s[i]);
    }
    mergeSort(s,0,n-1);
    while(s[0]!=s[1])
    {
        temp=gcd(s[1],s[0]);
        s[1]=s[0];
        s[0]=temp;
        // printf("a");
    }
    for(i=2;i<n;i++)
    {
        temp=gcd(s[i],s[1]);
        if(temp<s[1])
            s[1]=temp;
        if(s[1]==1)
            break;    
    }
    printf("%lld\n",s[1]*n);
}    