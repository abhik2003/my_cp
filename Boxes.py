for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    max_=max(a)
    msb=-1
    while max_!=0:
        msb+=1
        max_>>=1
    count=0
    x=2**msb
    for e in a:
        if e&x!=0:
            count+=1
    print((count+1)//2)
    # print(msb)