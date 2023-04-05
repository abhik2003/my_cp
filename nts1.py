def test(a,b):
    if(a+b>0 and (a+b)%2==0):
        return True
    else:
        return False
a,b,c=map(int,input().split())
if(test(a,b) or test(a,c) or test(b,c)):
    print("YES")
else:
    print("NO")