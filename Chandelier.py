for _ in range (int(input())):
    n=int(input())
    w=list(map(int,input().split()))
    a=list(map(int,input().split()))
    if(n==1):
        print(a[0]-w[0])
        continue
    dpf=[0]*n
    dpr=[0]*n
    
    dpf[0]=a[0]-w[0]
    for i in range(1,n):
        dpf[i]=max(a[i]-w[i],dpf[i-1]-w[i])
        
    dpr[-1]=a[-1]-w[-1]
    
    for i in range(n-2,-1,-1):
        dpr[i]=max(a[i]-w[i],dpr[i+1]-w[i])
        

    print(dpr[0],end=" ")
    for i in range(1,n-1):
        ans=dpf[i-1]+dpr[i+1]-w[i]
        print(max(ans,a[i]-w[i]),end=" ")
    print(dpf[-1],end=" ")
    print()
    