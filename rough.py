import math
for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    # print(math.lcm(2,2))
    GCD=a[0]
    for x in a:
        GCD=math.gcd(x,GCD)
    for x in a:
        ans=x//GCD
        print(ans,end=" ")
    print("    ",GCD)        