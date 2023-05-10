for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    i=0
    j=n-1
    maxx=min(a[i],a[j])
    count=0
    while True:
        if count==maxx:
            if count==0:
                print(n-1)
            else:
                print(n-count)
            break
        if a[i]<a[j]:
            count+=1
            maxx=max(maxx,a[i])
            i+=1
        else:
            count+=1
            maxx=max(maxx,a[j])
            j-=1
            