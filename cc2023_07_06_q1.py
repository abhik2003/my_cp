for _ in range (int(input())):
    n,m=map(int,input().split())
    if abs(n-m)%2==0:
        print("YES")
    else:
        print("NO")