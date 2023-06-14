for _ in range (int(input())):
    n,k=map(int,input().split())
    s=input()
    count=0
    ans=1
    last=-1
    mod=10**9+7
    aux=[]
    for i in range(n):
        c=s[i]
        if c=='a' or c=='e' or c=='i' or c=='o' or c=='u':
            aux.append(i)
    for i in range(k,len(aux),k):
        ans*=(aux[i]-aux[i-1])
        ans%=mod
    print(ans)
