for _ in range (int(input())):
    n,x,k=map(int,input().split())
    y=n-x

    
    x_=x%k
    y_=y%k
    
    if(x_<y_):
        print(y_-x_)
    else:
        print(x_-y_)
        