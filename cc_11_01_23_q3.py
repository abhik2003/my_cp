for _ in range (int(input())):
    x,y=map(int,input().split())
    if((x*y-x-y)>0):
        print(int(x*y-x-y))
    else:
        # for i in range(1,10000):
        #     if((i+x)%y==0 and (i+y)%x==0):
        #         print(i)
        #         break    
        if(x==1 and y==1):
            print("2")
        elif(x==1):
            print(y-1)
        elif(y==1):
            print(x-1)
        elif(x==2 and y==2):
            print("2")        