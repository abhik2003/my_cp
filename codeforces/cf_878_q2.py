import math
for _ in range (int(input())):
    n,k=map(int,input().split())
    t=math.floor(math.log2(n))+1
    if k>=t:
        print(n+1)
    else:
        print(2**k)