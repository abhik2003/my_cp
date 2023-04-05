for _ in range (int(input())):
    x,y=map(int,input().split())
    if x==y:
        if x%2==1:
            print("CHEF")
        else:
            print("CHEFINA")  
        continue
    elif x>y:
        if x-y>1:
            print("CHEF")
        else:
            if ((y+x-3)//2)%2==0:
                print("CHEF")  
            else:
                print("CHEFINA")  
    else:
        if y-x>1:
            print("CHEFINA")
        else:
            if ((y+x-3)//2)%2==0:
                print("CHEF")  
            else:
                print("CHEFINA")              
                  