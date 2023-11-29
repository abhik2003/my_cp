for _ in range (int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    odd=0
    for i in range(k):
        if (a[i]&1):
            odd+=1
    ans=0
    if (odd):
        ans+=1
    for i in range(k,n):
        if a[i-k]&1:
            odd-=1
        if a[i]&1:
            odd+=1
        if odd>0:
            ans+=1
    print(ans)