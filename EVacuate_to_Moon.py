for _ in range (int(input())):
    n,m,h=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    b=[b[i]*h for i in range(m)]
    b.sort(reverse=True)
    a.sort(reverse=True)
    ans=0
    for i in range(min(n,m)):
        ans+=min(a[i],b[i])
    print(ans)