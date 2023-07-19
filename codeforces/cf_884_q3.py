for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    neg=0
    odd=[]
    even=[]
    for i in range(n):
        if i&1:
            if (a[i]>=0):
                even.append(a[i])
        else:
            if (a[i]>=0):
                odd.append(a[i])
    if (len(odd)+len(even))==0:
        print(max(a))
        continue
    
    ans=max(sum(odd),sum(even))
    print(ans)
    
    