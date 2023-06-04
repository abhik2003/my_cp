for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    c=0
    for x in a:
        if x<0:c+=1
    if c!=0: print(min(a))
    else: print(max(a))
        