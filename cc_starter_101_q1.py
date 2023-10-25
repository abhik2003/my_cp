def calculateMove(s,t):
    ans=0
    for i in range(len(s)):
        x,y=min(t[i],s[i]),max(t[i],s[i])
        x=int(x)
        y=int(y)
        ans+=min(y-x,10+x-y)
    return ans
for _ in range (int(input())):
    n,m=map(int,input().split())
    s=input()
    M=input()
    ans=10**9
    for i in range(n-m+1):
        ans=min(ans,calculateMove(s[i:i+m],M))
        # print(i,ans,s[i:i+m])
    print(ans)