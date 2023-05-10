for _ in range (int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    neg=0
    pos=0
    for i in range(n):
        if b[i]==-1:
            neg+=(i+1)
        else:
            pos+=(i+1)
    print(abs(pos-neg))