for _ in range (int(input())):
    xa,ya=map(int,input().split())
    xb,yb=map(int,input().split())
    xc,yc=map(int,input().split())
    ans=1
    if (xa-xb)*(xa-xc)>0:
        ans+=min(abs(xa-xb),abs(xa-xc))
    if (ya-yb)*(ya-yc)>0:
        ans+=min(abs(ya-yb),abs(ya-yc))
    print(ans)
    