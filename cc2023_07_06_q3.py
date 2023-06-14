def pallindrome(num):
    r=0
    n=num
    while n!=0:
        r*=10
        r+=n%10
        n//=10
    if r==num:
        return True
    return False

for _ in range (int(input())):
    n=int(input())
    # a=list(map(int,input().split()))
    a=[(i+1) for i in range(n)]
    a.sort()
    # print(a)
    ans=0
    for i in range(n-1,0,-1):
        for j in range(i,0,-1):
            if pallindrome(a[i]^a[j]):
                if a[i]!=a[j] and a[i]^a[j]>10:
                    print(a[i],bin(a[i]),a[j],bin(a[j]),a[i]^a[j])
                    ans+=1
    print(ans)