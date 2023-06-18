for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    one=0
    for x in a:
        if x==1:one+=1
    min_one=n-one
    if min_one<=one:
        if min_one&1==0:
            print(0)
        else:
            print(1)
        continue
    else:
        ans=(min_one-one+1)//2
        if (min_one-ans)&1==0:
            print(ans)
        else:
            print(ans+1)
    
        