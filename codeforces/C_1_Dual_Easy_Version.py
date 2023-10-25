def solve():
    n=int(input())
    a=list(map(int,input().split()))
    pos=0
    for x in a:
        if x>0:
            pos+=1
    if pos==n:
        print(n-1)
        for i in range(n-1):
            print(i+2,i+1)
        return
    ans=[]
    if pos==0:
        print(n-1)
        for i in range(n-1,0,-1):
            print(i,i+1)
        return
    
    flag=0
    max_index=-1
    for i in range(n):
        if a[i]>0:
            max_index=i
            ans.append([i,i])
            ans.append([i,i])
            ans.append([i,i])
            ans.append([i,i])
            ans.append([i,i])
            break
    for i in range(1,n):
        ans.append([i,max_index])
        ans.append([i,max_index])
        max_index=i
    print(len(ans))
    for x in ans:
        print(x[0]+1,x[1]+1)
    

for _ in range (int(input())):
    solve()