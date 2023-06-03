fact=[0]*100
fact[0]=1
for i in range(1,100):
    fact[i]=(fact[i-1]*(i+1))
       
for _ in range (int(input())):
    n,k=map(int,input().split())
    if n<k:
        ans=1
        for i in range(n):
            ans*=(k-i)
            # ans%=1000000007
        print(ans)
        print(ans%1000000007)
        
        print(int(fact[k-1]//fact[k-n-1]))
    else:
        print(fact[k-1])