for _ in range (int(input())):
    n=int(input())
    if n==1:
        print(1)
        continue
    if n==2:
        print(1,2)
        continue
    a=[0]*n
    a[n//2]=1
    a[0]=2
    a[n-1]=3
    k=4
    for i in range(1,n-1):
        if a[i]==0:
            a[i]=k
            k+=1
    print(*a)