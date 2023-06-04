import math
def prime_check(n):
    if n==1: return False
    # print(n)
    for i in range(2,math.ceil(math.sqrt(n+1))):
        if n%i==0: return False
    return True

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
    # b=[]    
    if n==4:
        for i in range(n):
            # b.append(a[i])
            print(*a[i])
            
    else:
        for i in range(0,n,2):
            # b.append(a[i])
            print(*a[i])
        for i in range(1,n,2):
            # b.append(a[i])
            print(*a[i])
            
            
    
    # for i in range(n):
    #     for j in range(m):
    #         if j<m-1:
    #             if prime_check(abs(b[i][j]-b[i][j+1])):
    #                 print("Errora",n,m,abs(b[i][j]-b[i][j+1]))
    #         elif i<n-1:
    #             if prime_check(abs(b[i][j]-b[i+1][j])):
    #                 print("Error",n,m,abs(b[i][j]-b[i+1][j]))
    #                 print(b)