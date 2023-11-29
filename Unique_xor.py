def solve(s:str):
    zero=s.count('0')
    if zero==len(s):
        return 10**9,0
    else:
        n=len(s)
        one=n-zero
        return zero,one//2+(one&1)*2
    
    return ans,ans2

for _ in range (int(input())):
    n,k=map(int,input().split())
    s=input()
    s_list=["" for i in range(k)]
    ans1,ans2=0,0
    for i in range(k):
        for j in range(i,n,k):
            s_list[i]+=s[j]
        x,y=solve(s_list[i])
        ans1+=x
        ans2+=y
    print(min(ans1,ans2))