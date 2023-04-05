#include<stdio.h>
#include<math.h>
int p;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int*  randomizedPartition(int * array,int *left,int *right)
{
    srand(time(0));
    int pivot=rand()%(*right-*left+1)+*left;
    swap(array+pivot,array+(*right));
    int x=array[*right];
    int i=*left-1;
    for(int j=*left;j<=*right-1;j++)
    {
        if(array[j]<=x)
        {
            i++;
            swap(array+i,array+j);
        }
    }
    swap(array+(i+1),array+(*right));
    p=(i+1);
    return &p;
}

void quickSort(int * array, int *left,int *right)
{
    int *pivot,x,y;
    
    if(*left< *right)
    {
        pivot=randomizedPartition(array,left,right);
        x=*pivot-1;
        y=*pivot+1;
        quickSort(array,left,&x);
        quickSort(array,&y,right);
    }
    return;
}
void test_case(void);
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
    int n,x,i,max=0,cur_streak,j;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;j=n-1;
    quickSort(a,&i,&j);
    max=1;
    cur_streak=1;
    for(i=1;i<n;i++)
    {
        // printf("%d,",a[i]);
        if(a[i-1]==a[i])
        {
            cur_streak++;
            if(cur_streak>max)
                max=cur_streak;
        }
        else 
            cur_streak=1;
    }
    printf("%d\n",max-1);


}