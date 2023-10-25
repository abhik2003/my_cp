for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    for i in range(n):
        a[i]%=3
    ans=0
    for i in range(2,n):
        sum_=a[i]+a[i-1]+a[i-2]
        ans+=(3-(sum_%3))%3
        a[i]+=(3-(sum_%3))%3
        # print(ans)
    ans1=0
    for i in range(n):
        a[i]%=3
    for i in range(2,n):
        sum_=a[i]+a[i-1]+a[i-2]
        ans1+=(3-(sum_%3))%3
        a[i]+=(3-(sum_%3))%3
        # print(ans)
    print(min(ans,ans1))
        