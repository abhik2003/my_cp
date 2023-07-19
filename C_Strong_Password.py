for _ in range (int(input())):
    s=input()
    n=len(s)
    m=int(input())
    l=int(input())
    r=int(input())
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    min_=['*']*m 
    max_=['*']*m 
    min_[0]=s[0]
    max_[0]=s[0]
    last=0
    j=0
    for i in range(m):
        for j in range(last+1,n-(m-i-1)):
            if min_[i]=='*' or s[j]<min_[i]:
                min_[i]=s[j]
                last=j
    last=0
    j=0
    for i in range(m):
        for j in range(last+1,n-(m-i-1)):
            if max_[i]=='*' or s[j]>max_[i]:
                max_[i]=s[j]
                last=j
    mn=0
    for x in min_:
        mn*=10
        mn+=int(x)
    mx=0
    for x in max_:
        mx*=10
        mx+=int(x)
    if l>mx or r<mn:
        print("YES")
    else:print("NO")
        
    
    print(mn,mx)
    
    
    