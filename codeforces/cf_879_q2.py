for _ in range (int(input())):
    x,y=map(str,input().split())
    if len(x)<len(y):
        x='0'*(len(y)-len(x))+x
    elif len(x)>len(y):
        y='0'*(len(x)-len(y))+y
    i=0
    while  i<len(x) and x[i]==y[i] :
        i+=1
    if i==len(x):
        print(0)
        continue
    ans=abs(ord(y[i])-ord(x[i]))
    ans+=(len(x)-i-1)*9
    print(ans)
        