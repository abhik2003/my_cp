import math
for _ in range (int(input())):
    x=int(input())
    t=math.floor(math.sqrt(x*x+math.floor(pow(x*x,2/3))+2*x*math.floor(pow(x*x,1/3))))
    print(t)
    ans=t*t
    c=0
    while True:
        if math.floor(math.sqrt(ans))-math.floor(ans**(1/3))>=x:
            break
        else:
            t+=1
            ans=t*t
        c+=1    
    if pow(math.floor(ans**(1/3))+1,3)==ans:
        ans=(t+1)*(t+1)
    print(int(ans),c)        