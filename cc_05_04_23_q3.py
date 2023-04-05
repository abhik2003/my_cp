for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    if n<=2:
        print("NO")
    else:
        sec_large_count=a.count(a[n-2])
        count=0
        for i in range(n):
            if a[i]==a[n-2]:
                count=i
                break
        if count==0:
           print("NO")
        else: 
            if a[n-2]==a[n-1]:
                sec_large_count-=1
                if count>=sec_large_count:
                    print("YES")
                else:
                    print("NO")
            else:
                print("YES")    
    
    # print(a)