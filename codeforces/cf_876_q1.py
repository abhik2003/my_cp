import math
for _ in range (int(input())):
    n,k=map(int,input().split())
    a=[0]*n
    for i in range(0,n//2,k):
        a[i]=1
    for i in range(n-1,(n-1)//2,-k):
        a[i]=1
    count=0
    for i in range(n):
        if a[i]==1:
            count+=1
        if math.ceil((i+1)/k)>count:
            count+=1
    print(count)