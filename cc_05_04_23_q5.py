for _ in range (int(input())):
    n=int(input())
    count=0
    for i in range(61):
        x=int(pow(2,i))
        if x & n!=0:
            count+=1
    ans=1
    t=1
    for i in range(count):
        ans=(ans*3)%1000000007
        t=(t*2)%1000000007
    ans=(ans-3*(t-1))%1000000007
    print(ans)