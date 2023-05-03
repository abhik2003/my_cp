for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s=sum(a)
    if n%2==1 and min(a)%2==1:
        if s%2==1:
            
            print("CHEFINA")
        else:
            print("CHEF")
    else:
        if s%2==0:
            
            print("CHEFINA")
        else:
            print("CHEF")