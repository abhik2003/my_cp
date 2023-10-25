for _ in range (int(input())):
    l,n=list(map(str,input().split()))
    l=int(l)
    if l<=3:
        print(n[:l-1],end="")
        original=n[-1]
        n=int(n)
        if n%8==0:
            print(original)
            continue
        n=n//10
        n*=10
        last_dig=(8-n%8)
        print(last_dig)
    else:
        print(n[:l-1],end="")
        original=n[-1]
        n=n[l-3:]
        n=int(n)
        if n%8==0:
            print(original)
            continue
        n=n//10
        n*=10
        last_dig=(8-n%8)
        print(last_dig)