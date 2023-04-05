for _ in range (int(input())):
    n,x=map(int,input().split())
    if x<(1-n) or x>(n+1):
        print("-1")
    else:
        k=1+n-x
        minus=k//2
        mult=k%2
        add=n-minus-mult
        str=""
        str+='+'*add
        str+='*'*mult
        str+='-'*minus
        print(str)
            