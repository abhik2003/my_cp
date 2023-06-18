def difference(n,x,y):
    c=0
    for i in range(n):
        if x[i]!=y[i]:c+=1
    return c
for _ in range (int(input())):
    n=int(input())
    s=input()
    t=input()
    s_rev=s[::-1]
    forward_dif=difference(n,s,t)
    reverse_dif=difference(n,s_rev,t)
    if forward_dif==0:
        print(0)
        continue
    if reverse_dif==0: 
        ans=2*forward_dif-1+(forward_dif-1)%2
        print(min(2,ans))
        continue
    
    ans=2*forward_dif-1+(forward_dif-1)%2
    ans=min(ans,2*reverse_dif-1+(reverse_dif)%2)
    print(ans)