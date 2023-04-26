for _ in range (int(input())):
    n=int(input())
    s=input()
    one=s.count('1')
    ans=min(one,n-one)%2
    if ans:
        print("Zlatan")
    else:
        print("Ramos")
    # print(one)