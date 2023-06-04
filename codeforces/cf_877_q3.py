for _ in range (int(input())):
    n,m=map(int,input().split())
    a=[[0]*m for _ in range(n)]
    
    if n==4:
        for i in range(n):
            for j in range(m):
                a[i][j]=i+j*n+1
    else:     
        for i in range(n):
            for j in range(m):
                a[i][j]=i*m+j+1 
    if n==4:
        for i in range(n):
            print(*a[i])
            
    else:
        for i in range(0,n,2):
            print(*a[i])
        for i in range(1,n,2):
            print(*a[i])
            
            