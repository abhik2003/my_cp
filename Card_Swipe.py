for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    aux=[0]*(max(a)+1)
    ans=0
    current=0
    for x in a:
        if aux[x]:
            current-=1
            aux[x]=0
        else:
            aux[x]=1
            current+=1
            ans=max(current,ans)
    print(ans)