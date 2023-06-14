for _ in range (int(input())):
    dic={'A':1,'B':10,'C':100,'D':1000,'E':10000}
    s=input()
    n=len(s)
    a=[dic[s[i]] for i in range(n)]
    max_=a[n-1]
    for i in range(n-2,-1,-1):
        if a[i]<max_:
            a[i]=-a[i]
        else:
            max_=max(max_,a[i])
    print(*a)
    