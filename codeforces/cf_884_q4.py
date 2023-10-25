for _ in range (int(input())):
    n=int(input())
    x=0
    for i in range(2,27):
        if n%i:
            x=i
            break
    