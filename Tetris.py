a=[[0,1],[1,0],[1,2],[3,1]]
b=[[0,0],[1,0],[0,1],[3,1]]

mod=1000000007
x=1e5+1
for i in range(4,100001):
    b0=a[i-1][1]+b[i-1][1]
    b1=a[i-2][1]+b[i-2][1]
    b1+=a[i-3][1]+b[i-3][1]
    b1+=a[i-4][1]+b[i-4][1]
    
    b0%=mod
    b1%=mod
    b.append([b0,b1])
    a0=a[i-2][0]+b[i-2][0]
    a0+=a[i-3][0]+b[i-3][0]
    a0+=a[i-4][0]+b[i-4][0]
    a1=a[i-1][0]+b[i-1][0]
    
    a0%=mod
    a1%=mod
    a.append([a0,a1])
# print(a)
# print(b)
for _ in range (int(input())):
    n=int(input())
    ans=0
    for i in range(1,5):
        if((n-i-1)<0):
            break
        ans+=a[n-i-1][0]+b[n-i-1][0]
    if n<5:
        ans+=1
    ans%=mod
    print(ans)