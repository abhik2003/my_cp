def fun(x):
    return x[1]
def fun1(x):
    return x[0]
for _ in range (int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    
    for i in range(n):
        if(a[i]%k):
            a[i]=[a[i]%k,i]
        else:
            a[i]=[k,i]
        
        
        
        
            
    a.sort(key=fun,reverse=True)
    print(a)
    a.sort(key=fun1)
    print(a)
    for i in range(n-1,-1,-1):
        print(a[i][1]+1,end=" ")
    print()