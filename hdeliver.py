# https://www.codechef.com/problems/HDELIVER

for _ in range(int(input())):
    n,m=map(int,input().split())
    par=[i for i in range(n)]
    size=[1]*n
    for __ in range(m):
        x,y=map(int,input().split())
        while(x!=par[x]):
            x=par[x]
        while(y!=par[y]):
            y=par[y]
        if(size[x]>size[y]):
            par[y]=x
            size[x]+=size[y]
        else:
            par[x]=y
            size[y]+=size[x]
    q=int(input())
    for ___ in range(q):
        x,y=map(int,input().split())
        while(x!=par[x]):
            x=par[x]
        while(y!=par[y]):
            y=par[y]
        if(x==y):
            print("YO")
        else:
            print("NO")
            