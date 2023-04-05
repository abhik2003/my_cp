for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=[0]*n
    for e in a:
        if e<=n:
            count[e-1]+=1
    ans=[0]*n
    t=1
    ans[0]=count[0]
    if ans[0]!=0:
        for i in range(1,len(count)):
            if count[i]!=0:
                ans[i]=(ans[i-1]*count[i])%1000000009
            else:
                break    
    print(sum(ans))