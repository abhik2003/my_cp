for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    n_index=a.index(n)
    if n==1:
        print(*a)
        continue
    if n_index==0:
        n_1_index=a.index(n-1)
        if n_1_index==(n-1):
            print(*a[n-1:]+a[:n-1])
        else:
            print(*a[n_1_index:],end=" ")
            print(a[n_1_index-1],end=" ")
            print(*a[:n_1_index-1])
    else:
        if n_index==n-1:
            i=n_index-1
            print(a[n_index],end=" ")
            while i>=0:
                if a[i]<a[0]:
                    break
                print(a[i],end=" ")
                i-=1
            print(*a[:i+1])
        else:
            print(*a[n_index:],a[n_index-1],end=" ")
            i=n_index-2
            while i>=0:
                if a[i]<a[0]:
                    break
                print(a[i],end=" ")
                i-=1
            print(*a[:i+1])
                
    
