# 
#  ──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌
# ───▄▄██▌█ beep beep
# ▄▄▄▌▐██▌█ code delivery
# ███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
# ▀(@)▀▀▀▀▀▀▀(@)(@)▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀(@)▀
#  

for _ in range (int(input())):
    n=int(input())
    q=list(map(int,input().split()))
    # a=[]
    # ans=""
    flag=0
    min_=-1
    max_=-1
    flag2=0
    for x in q:
        if flag2==0:
            # a.append(x)
            # ans=ans+'1'
            print("1",end="")
            max_=x
            min_=x
            flag2=1
        elif flag==0 and x>=max_:
            # a.append(x)
            # ans=ans+'1'
            print("1",end="")
            max_=x
        elif flag==0 and x<=min_:
            # a.append(x)
            # ans=ans+'1'
            print("1",end="")
            flag=1
            max_=min_
            min_=x
        elif flag==0:
            # ans+='0'
            print("0",end="")
        elif flag==1:
            if x>=min_ and x<=max_:
                # ans+='1'
                print("1",end="")
                min_=x
            else:
                # ans+='0'
                print("0",end="")
    print()
            