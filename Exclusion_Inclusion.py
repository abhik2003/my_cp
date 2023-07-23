for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    tot=sum(a)
    for x in a:
        print(tot,end=" ")
        tot-=x
    print()