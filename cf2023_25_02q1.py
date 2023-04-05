import math
for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    flag=0
    a.sort()
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if math.gcd(a[i],a[j])<=2:
                flag=1
                break
        if flag==1:
            break
    if flag==1:
        print("YES")
    else:
        print("NO")            
    