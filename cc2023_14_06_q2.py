for _ in range (int(input())):
    n,b=map(int,input().split())
    a=list(map(int,input().split()))
    t=2**30-1
    c=0
    for x in a:
        if x & b==b:
            t&=x
            c+=1
    if t==b and c!=0:print("Yes")
    else:print("No")