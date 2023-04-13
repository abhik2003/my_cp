for _ in range (int(input())):
    n=input()
    if(len(n)==1):
        print(n)
    else:
        num=n[len(n)-2]+n[len(n)-1]
        num=int(num)
        print(num%20)