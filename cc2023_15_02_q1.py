for _ in range (int(input())):
    n,m=map(int,input().split())
    a=input()
    b=input()
    if(len(a)<len(b)):
        s=a 
        a=b 
        b=s
        # print(a,b)
    freq=[0]*26
    for i in range(len(a)):
        freq[ord(a[i])-ord('a')]+=1
    flag=0    
    for i in range(len(b)):
        freq[ord(b[i])-ord('a')]-=1
        if(freq[ord(b[i])-ord('a')]<0):
            flag=1
    count=0
    for elem in freq:
        if(elem%2==1):
            count+=1
    if(flag):
        print("NO")        
    elif(count<=1):
        print("YES")
    else:
        print("NO")            