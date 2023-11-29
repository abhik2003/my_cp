for _ in range (int(input())):
    n=int(input())
    x,y=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    ans=a[-1]-a[0]
    b=[abs(a[i]) for i in range(1,n-1)]
    b.sort(reverse=True)
    for i in range(min(len(b),(x+y))):
        ans+=abs(b[i])
    print(ans)