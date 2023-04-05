for _ in range (int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    a=[0]*n 
    a[0]=b[0]
    flag=True
    #bi=|a[i]-a[i-1]| 
    # bi=a[i]-a[i-1]    or,   bi=a[i-1]-a[i] 
    # a[i]=b[i]+a[i-1]    or,   a[i]=a[i-1]-b[i]
    for i in range(1,n):
        if(a[i-1]-b[i]>=0):
            if(b[i]==0):
                a[i]=a[i-1]
            else:
                print("-1")
                flag=False
                break
        else:
            a[i]=b[i]+a[i-1]
    if(flag):         
        for elem in a:
            print(elem,end=" ")
        print("")    
    