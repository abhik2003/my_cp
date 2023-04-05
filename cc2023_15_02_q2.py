def reduce(a):
    a[1]-=a[0]
    a[2]-=a[0]
    a[0]=0
def solve():
    a=list(map(int,input().split()))
    a.sort()
    reduce(a)
    b=[i for i in a]
    c=0
    while(True):
        reduce(a)
        if(a[0]== a[1] and a[0]==a[2]):
            return c
        elif(a==b and c!=0):
            return -1
        # c+=1
        x=(a[2]-a[1])//2
        if(x==0):
            x=(a[1]-a[0])//2
        if(x==0):
            return -1
        
        a[0]+=x
        a[1]+=x
        a[2]-=x
        c+=x
        
        a.sort()
        # print(a)
        
            
            # print(a)
for _ in range (int(input())):
    print(solve())