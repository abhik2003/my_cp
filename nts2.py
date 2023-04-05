for _ in range (int(input())):
    n,l,s=map(int,input().split())
    x=l*(l+1)/2
    if s>=x and s<=x+l*(n-l):
        z=(s-x)%l
        if(z==0 or z==1 or z==l-1):
            print("YES")
        else:
            print("NO")    
    else:
        print("NO1")           