for _ in range (int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    a=[*set(a)]
    print(a)
    # t=a[0]
    # for x in a:
    #     t=t&x
    # print(t)
    ans=x
    f=0
    print(n,ans)
    while True:
        t=ans|a[0]
        for e in a:
            if e|ans!=t:
                f=1
                break
        if f:
            break
        ans-=1
    print(ans)