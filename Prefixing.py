for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    present=set()
    maxi=-1000000
    for x in a:
        if x in present:
            print(maxi,end=" ")
        else:
            print(x,end=" ")
            present.add(x)
            maxi=max(maxi,x)
    print()