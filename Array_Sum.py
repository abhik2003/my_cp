for _ in range (int(input())):
    n,k=map(int,input().split())
    if k<3*(n//2):
        print(-1)
        continue
    extra=k-3*(n//2)
    if extra & 1:
        print(-1)
        continue
    ans=[(i&1)+1 for i in range(n)]
    # print(ans)
    i=0
    f=0
    while extra>0:
        if(i==n):
            print(-1)
            f=1
            break
        x=min(extra,10**5-2)
        ans[i]+=x
        extra-=x
        i+=1
    if f==0:
        print(*ans)
        