for _ in range(int(input())):
    n=int(input())
    s=input()
    one=s.count('1')
    if one==0 or one==2*n:
        print("-1")
        continue
    
    first1=-1
    for i in range(2*n+1):
        if s[i]=='1':
            first1=i+1
            break
    first0=-1
    for i in range(2*n+1):
        if s[i]=='0':
            first0=i+1
            break 
    x=max(first0,first1)
    count=0
    for i in range(1,2*n+1):
        if i!=x:
            print(i,end=' ')
            count+=1
        if count==n:
            break
    print("")
        
    
           