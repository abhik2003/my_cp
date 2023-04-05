# import math
def test_case():
    x=input()
    n,x1,y1,x2,y2=x.split()
    n=int(n)
    x1=int(x1)
    y1=int(y1)
    x2=int(x2)
    y2=int(y2)
    temp=abs(x2-x1)+abs(y2-y1)
    temp2=min(x1,n-x1+1,y1,n-y1+1)+min(x2,n-x2+1,y2,n-y2+1)
    print(min(temp,temp2))


t=int(input())
while t!=0:
    test_case()
    t-=1