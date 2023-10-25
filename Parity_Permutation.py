for _ in range (int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    mod=10**9+7
    if k==0:
        odd=0
        for x in a:
            if x&1:
                odd+=1
        if odd==0 or odd==n:
            ans=1
            for i in range(1,n+1):
                ans*=i
                ans%=mod
            print(ans)
        else:
            print(0)
    else:
        odd=0
        for x in a:
            if x&1:
                odd+=1
        even=n-odd
        if abs(odd-even)>1:
            print(0)
        else:
            ans=1
            for i in range(1,odd+1):
                ans*=i
                ans%=mod
            for i in range(1,even+1):
                ans*=i
                ans%=mod
            if odd==even:
                ans*=2
                ans%=mod
            print(ans)