for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    pre=[0]*n
    pre[0]=a[0]
    for i in range(1,n):
        pre[i]=pre[i-1]+a[i]
    suf=[0]*n
    if a[n-1]<0:
        suf[n-1]=abs(a[n-1])
    else:
        suf[n-1]=0
        
    for i in range(n-2,-1,-1):
        if a[i]<0:
            suf[i]=suf[i+1]+abs(a[i])
        else:
            suf[i]=suf[i+1]
    ans=0
    prof=pre[n-1]
    i=0
    print(pre,suf)
    for i in range(n):
        if suf[i]+pre[i]>=prof and a[i]>0:
            ans=pre[i]
            prof=suf[i]+pre[i]
            
    # if ans<0:
    #     ans=0
    print(ans)
    