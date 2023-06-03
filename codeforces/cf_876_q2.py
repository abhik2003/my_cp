def second_val(x):
    return x[1]
def first_val(x):
    return x[0]
for _ in range (int(input())):
    n=int(input())
    a=[[0,0] for _ in range(n)]
    for i in range(n):
        a[i][0],a[i][1]=map(int,input().split())
    a.sort(key=second_val,reverse=True)
    a.sort(key=first_val)
    curent=0
    broken=0
    on=0
    ans=0
    aux=[0]*(n+1)
    skip=0
    for x in a:
        if x[0]<=skip:
            continue
        if x[0]>on:
            ans+=x[1]
            aux[x[0]]+=1
            on+=1
            temp=on
            skip=on
            on-=aux[on]
            aux[temp]=0
        # print(ans,aux)
    print(ans)