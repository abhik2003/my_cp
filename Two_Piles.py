for _ in range (int(input())):
    n=int(input())
    a=[]
    for i in range(n):
        x=list(map(int,input().split()))
        a.append(x)
    # print(a)
    minimum=0
    min_ind=-1
    for i in range(n):
        if (min(a[i])>minimum):
            minimum=min(a[i])
            min_ind=i
    ans=minimum
    aux=[]
    aux.append(max(a[min_ind]))
    for i in range(n):
        if (i!=min_ind):
            ans=min(ans,abs(a[i][0]-minimum),abs(a[i][1]-minimum))
            if(max(a[i])>minimum):
                aux.append(max(a[i]))
    aux.sort()
    for i in range(1,len(aux)):
        ans=min(ans,aux[i]-aux[i-1])
            
    print(ans)