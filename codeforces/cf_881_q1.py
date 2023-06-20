for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    ans=0
    for i in range((n+1)//2):
        ans+=(a[n-1-i]-a[i])
    print(ans)