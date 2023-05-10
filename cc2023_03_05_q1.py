for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    x=a[0]
    ans=0
    count=1
    for i in range(1,n):
        if a[i]==x:
            count+=1
        else:
            x=a[i]
            ans+=count*(n-count)
            count=1
        if i==(n-1):
            ans+=count*(n-count)
            
    print(int(ans/2))