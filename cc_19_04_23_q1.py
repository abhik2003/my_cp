for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=min(abs(a[0]-a[1]),abs(a[n-1]-a[n-2]))
    for i in range(1,n-1):
        t=max(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]))
        ans=min(ans,t)
    print(ans)