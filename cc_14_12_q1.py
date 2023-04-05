for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    # if max(a)<k:
    #     print("-1")
    #     continue
    
    aux=[[a[i],b[i]] for i in range(n)]
    aux.sort(key=lambda x:x[1])
    selection=[0]*(max(a)+1)
    ans=0
    count=0
    flag=1
    for elem in aux:
        if selection[elem[0]]!=1:
            selection[elem[0]]=1
            ans+=elem[1]
            count+=1
        if count==k:
            print(ans)
            flag=0
            break
    if flag:
        print("-1")   
        