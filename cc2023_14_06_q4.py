import math

for _ in range (int(input())):
    n=int(input())
    s=input()
    four=[]
    star=[]
    zero=[]
    a=[]
    mod=10**9+7
    for i in range(n):
        if s[i]=='4':
            a.append([1,0,0])
        elif s[i]=='*':
            a.append([0,1,0])
        else:
            a.append([0,0,1])
    four.append(a[0][0])
    star.append(a[0][1])
    for i in range(1,n):
        four.append(four[i-1]+a[i][0])
        star.append(star[i-1]+a[i][1])
    ans=0
    tot4=four[n-1]
    tot_star=star[n-1]
    for i in range(1,n-1):
        if a[i][0]!=1:
            l4=four[i-1]
            r4=tot4-l4
            ls=star[i-1]
            rs=tot_star-star[i]
            lc=(pow(2,ls-1,mod))*(ls+2*l4)
            rc=(pow(2,rs-1,mod))*(rs+2*r4)
            ans+=int(lc)*int(rc)
            ans%=mod
    print(ans)
        