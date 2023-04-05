for _ in range (int(input())):
    n=int(input())
    s=input()
    n1=0
    n2=1
    x='0'
    for i in range(0,n-1):
        if s[i]!=x:
            x='1'
            n1+=1
        else:
            x='0' 
    x='1'      
    for i in range(0,n-1):
        if s[i]!=x:
            x='1'
            n2+=1
        else:
            x='0' 
    print(max(n1,n2))       