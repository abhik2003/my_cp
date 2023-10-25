def isFeasable(a,r,h):
    health=h
    for x in a:
        if x>r:
            health-=x
    return (health>0)
            

for _ in range (int(input())):
    n,h=map(int,input().split())
    a=list(map(int,input().split()))
    l,r=0,max(a)
    while l!=r:
        m=(l+r)//2
        # print(l,r,m)
        if isFeasable(a,m,h):
            r=m
        else:
            l=m+1
    print(l)