for _ in range (int(input())):
    n,k,q=map(int,input().split())
    a=list(map(int,input().split()))
    aux=[0]*n
    for i in range(n):
        if a[i]<=q:
            aux[i]=1
    for i in range(1,n):
        if aux[i]==1:
            aux[i]+=aux[i-1]
    ans=0
    # print(aux)
    for x in aux:
        if x>=k:
            ans+=(x-k)+1
    print(ans)