for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    for i in range(1,n):
        a[i]=a[i]^a[i-1]
        a[i-1]=0
    
    count=n
    for i in range(n):
        if(a[i]!=0):
            count-=1
    if(count==n):
        print("YES")
    elif (count==n-1):
        if(count%2==1):
            print("NO")
        else:
            print("YES")
    else:
        print("NO")        
