for _ in range (int(input())):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    choice1=m*(n-x)
    choice2=m*(x-1)
    choice3=n*(m-y)
    choice4=n*(y-1)
    print(max(choice1,choice2,choice3,choice4))