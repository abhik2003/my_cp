import math
def fact(n):
    ans=1
    for i in range(1,n+1):
        ans=(ans*i)%1000000007
    return ans

def moduloInverse(p, q): 
    m = 1000000007
    e = 0
    e = m - 2
    while e!=0:
        if (e & 1):
            p=(p*q)%m
        q =(q*q)%m
        e >>= 1
    return p


n=int(input())
x=[0]*n
for i in range(n):
    a,b=map(int,input().split())
    x[i]=a
x.sort()


t=x[0]
num=1
count=1
for i in range(1,n):
    if x[i]==t:
        count+=1
    else:
        t=x[i]
        num*=fact(count)
        count=1
    if i==(n-1):
        num*=fact(count)
den=fact(n)
cf=math.gcd(num,den)
num//=cf
den//=cf
print(moduloInverse(num,den))
