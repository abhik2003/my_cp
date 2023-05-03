for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=1
    count=0
    max_cur=a[0]
    aux1=[0]*n
    # if a[0]!=1:
    #     aux1[0]=1
    # if a[n-1]!=n:
    #     aux1[n-1]=1
        
    for i in range(1,n):
        if a[i]<max_cur:
            aux1[i]=1
        else:
            max_cur=a[i]
    
    min_cur=a[n-1]
    for i in range(n-2,-1,-1):
        if a[i]>min_cur:
            aux1[i]=1
        else:
            min_cur=a[i]
            
    count=sum(aux1)
    count=n-count
    
    # print(count)
    for _ in range(count):
            ans*=2
            if ans>998244353:
                ans%=998244353
    if count==n:
        ans-=1
        
    print(ans)