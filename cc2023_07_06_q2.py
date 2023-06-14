for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    mod=10**9+7
    ans=1
    count=0
    for x in a:
        if x%2==0:
            count+=1
    for _ in range(count):
        ans*=2
        ans%=mod
    if count==n:
        ans-=1
    print(ans)
    