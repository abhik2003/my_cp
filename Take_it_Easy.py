for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    tot=sum(a)
    avg=tot//n
    if (avg*n)!=tot:
        print("NO")
        continue
    ans="YES"
    for x in a:
        if ((x-avg)&1):
            ans="NO"
            break
        
    print(ans)