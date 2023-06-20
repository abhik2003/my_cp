import sys
input=sys.stdin.readline
for _ in range (int(input())):
    n=int(input())
    g=[set() for i in range(n+1)]
    for i in range(n-1):
        u,v=map(int,input().split())
        g[u].add(v)
        g[v].add(u)
    queue=[]
    a=[0]*(n+1)
    for i in range(2,n+1):
        if len(g[i])==1:
            queue.append(i)
            a[i]=1
    i=0
    while len(queue)!=i:
        x=queue[i]
        y=g[x].pop()
        g[y].remove(x)

        a[y]+=a[x]
        if len(g[y])==1 and y!=1:
            queue.append(y)
        i+=1
    
    q=int(input())
    for i in range(q):
        x,y=map(int,input().split())
        print(a[x]*a[y])