for _ in range (int(input())):
    n,k,x=map(int,input().split())
    if x!=1:
        print("YES")
        print(n)
        for i in range(n):
            print(1,end=" ")
        print()
    else:
        if (n&1)==0 and k!=1:
            print("YES")
            print(n//2)
            for i in range(n//2):
                print(2,end=" ")
            print()
        elif k==1:
            print("NO")
        else:
            if k<3:
                print("NO")
            else:
                print("YES")
                n-=3
                print(n//2+1)
                print(3,end=" ")
                for i in range(n//2):
                    print(2,end=" ")
                print()
                