# https://www.codechef.com/problems/XORAND
import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=[0]*31
    for x in a:
        count[int(math.log2(x))]+=1
    ans=0
    for x in count:
        ans+=int((x*x-x)/2)    
    print(ans)    