for _ in range (int(input())):
    n,k=map(int,input().split())
    a=input().split()
    b=input().split()
    flag=1
    count=[0]*10
    for i in range(n):
        if len(a[i])!=len(b[i]):
            flag=0
            break
        for j in range(len(a[i])):
            count[ord(a[i][j])-ord('0')]+=1
            count[ord(b[i][j])-ord('0')]-=1
    if flag==0:
        print("NO")
    else:
        t=0
        for elem in count:
            t+=abs(elem)
        t=t/2
        if t<=k:
            print("YES")
        else:
            print("NO")
        
            
    # print(a,b)