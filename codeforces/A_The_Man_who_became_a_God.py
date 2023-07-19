for _ in range (int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    ans=0
    dif=[]
    for i in range(n-1):
        dif.append(abs(a[i]-a[i+1]))
    dif.sort(reverse=True)
    ans=sum(dif)
    for i in range(k-1):
        ans-=dif[i]
    print(ans)