# https://www.codechef.com/problems/PPTEST
for _ in range(int(input())):
    n,W=map(int,input().split())
    data=[[0,0,0,0,0] for _ in range(n)]
    # 0-->c  1-->p  2-->t  3-->c*p   4-->(c*p)/t
    m=[[0]*(W+1) for _ in range(n+1)]
    for i in range(n):
        data[i][0],data[i][1],data[i][2]=map(int,input().split())
        data[i][3]=data[i][0]*data[i][1]
        data[i][4]=data[i][3]/data[i][2]

    for k in range(1,n+1):
        for w in range(W+1):
            if(data[k-1][2]>w):
                m[k][w]=m[k-1][w]
            else:
                m[k][w]=max(m[k-1][w],m[k-1][w-data[k-1][2]]+data[k-1][3])    

    i=0
    ans=m[n][w]
    print(int(ans))
