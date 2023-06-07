for _ in range (int(input())):
    n=int(input())
    s=input()
    ans=""
    temp=""
    flag=0
    for i in range(n):
        if flag==0:
            temp=s[i]
            ans+=temp
            flag=1
        else:
            if temp==s[i]:
                flag=0
    print(ans)
        