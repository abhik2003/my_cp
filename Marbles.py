for _ in range (int(input())):
    a,b=map(int,input().split())
    if a==b:
        print('0')
    else:
        x=0
        while ((a-x)%(b+x)):
            x+=1
        if(x==a):
            x=10000
        y=0
        while ((a+y)%(b-y)):
            y+=1

        print(min(x,y))
        