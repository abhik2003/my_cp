for _ in range (int(input())):
    n,k=map(int,input().split())
    s=input()
    ans=""
    if s[0]=='0':
        ans+='1'
        ans+=s[1:]
        k-=1
    else:
        ans=s    
    ans=ans+'0'*k 
    print(ans)