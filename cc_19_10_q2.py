# cook your dish here
def tes_case():
    n=int(input())
    s=input()
    # print(s)
    s=str(s)
    s=s.replace(' ','')
    
    def my_func(s):
        n1=len(s)
        s1=s.replace('10','')
        s1=s1.replace('01','')
        n1-=len(s1)
        n1=n1/2
        ans=n1
        return s1,ans
    import math    
        
    ans=0
    while True:
        x,y=my_func(s)
        ans+=int(y)
        
        if x==s:
            if len(x)>0 :
                x=x.replace('0','')
                # z=len(x)
                # print(z)
                ans+=int((len(x)/3))
            break
        s=x
        
    print(ans)
    # print(s)

t=int(input())
while t!=0:
    tes_case()
    t-=1