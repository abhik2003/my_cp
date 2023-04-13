for _ in range (int(input())):
    n=int(input())
    if n<3:
        print('0')
    else:
        n=n-3
        if n%2==1:
            print(3+(n//2)*3)
        else:
            print(2+3*(n//2))