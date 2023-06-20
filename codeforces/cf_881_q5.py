for _ in range (int(input())):
    n,m=map(int,input().split())
    b=[]
    for i in range(m):
        l,r=map(int,input().split())
        b.append([l-1,r-1])
    Q=int(input())
    a=[0]*n
    for i in range(Q):
        x=int(input())
        a[x-1]=i+1
    l=1
    r=Q
    ans=(l+r)//2
    flag=False
    
    while l<=r :
        ans=(l+r)//2
        pre=[0]*n
        if a[0]<=ans and a[0]!=0:
            pre[0]=1
        for i in range(1,n):
            if a[i]<=ans and a[i]!=0:pre[i]=pre[i-1]+1
            else:pre[i]=pre[i-1]
        f2=False
        for x in b:
            l_,r_=x[0],x[1]
            if l_==0:
                one=pre[r_]
            else:
                one=pre[r_]-pre[l_-1]
            zero=(r_-l_+1)-one
            if one>zero:
                f2=True
                flag=True
                break
        if l==r:
            break
        if f2:
            r=ans
        else:
            l=ans+1
        
    if flag==False:
        print(-1)
    else:
        print(ans)
                
    
        