def myFunc(x):
    return x[0]+x[1]
for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[[a[i],b[i]] for i in range(n)]
    c.sort(key=myFunc)
    for i in range(n):
        print(c[i][0],end=' ')
    print()
    for i in range(n):
        print(c[i][1],end=' ')
    print()