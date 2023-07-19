for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    mx=2**33-1
    overall_and=mx
    for x in a:
        overall_and&=x
    
    if overall_and!=0:
        print(1)
        continue
    ans=0
    temp=mx
    flag=1
    
    for x in a:
        temp&=x
        if temp==overall_and:
            ans+=1
            temp=mx
    print(ans)
        
            
    