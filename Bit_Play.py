for _ in range (int(input())):
    n=int(input())
    s=input()
    ans=1
    mod=10**9+7
    for i in range(0,n-2,2):
        count=0
        a=int(s[i])
        b=int(s[i+1])
        c=int(s[i+2])
        if a|b ==c:
            count+=1
        if a&b ==c:
            count+=1
        if a^b ==c:
            count+=1
        ans*=count
        ans%=mod
    print(ans)
        