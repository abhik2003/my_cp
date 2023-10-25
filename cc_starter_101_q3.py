for _ in range (int(input())):
    a,b=map(int,input().split())
    x=a^b
    f=True
    for i in range(29,-1,-1):
        t=1<<i  
        if t&x and f:
            t=t&a
            if t==0:
                t=1<<i
                t=~t
                x=x&t
            f=False
        else:
            t=1<<i
            if t&x:
                t=t&b
                if t==0:
                    t=1<<i
                    t=~t
                    x=x&t
                
    print(x) 
    # print(abs((x^a)-(x^b)),x^a,x^b)