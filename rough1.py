import math
for _ in range (int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=[0]*n
    b[0]=a[0]
    for i in range(1,n):
        if a[i-1]==a[i]:
            x=m-(m%a[i])
        else:    #a[i-1]>a[i]
            x=m-(m%a[i])
            while math.gcd(x,a[i-1])!=a[i]:
                x-=a[i]
        b[i]=x
    print(*b)
    