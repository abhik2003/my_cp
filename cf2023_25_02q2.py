for _ in range (int(input())):
    n=int(input())
    s=input()
    um=[]
    for i in range ((n-2)//2+1):
        if s[i]!=s[n-1-i]:
            um.append(i)
    ans=True        
    for i in range(1,len(um)):
        if um[i]-um[i-1]!=1:
            ans=False      
    if ans:
        print("YES")

    else:
        print("NO")              