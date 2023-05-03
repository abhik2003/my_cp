# cook your dish here
import math
for _ in range (int(input())):
    n=int(input())
    if n==1:
        print("-1")
        continue
    a=math.floor(math.sqrt(n-1))
    b=a
    c=(n-a*a)
    if c>1000000:
        a+=1
        c=n-a*b
    print(a,b,c)