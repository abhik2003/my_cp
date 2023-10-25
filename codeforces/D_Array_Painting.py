# for _ in range (int(input())):
n=int(input())
a=list(map(int,input().split()))
n=len(a)
two=[]
one=0
for i in range(n):
    if a[i]==2:
        two.append(i)
    elif a[i]==1:
        one+=1
aux=[0]*n
ans=0
for x in two:
    if aux[x]==0:
        aux[x]=1
        ans+=1
    else:
        continue
    i=x-1
    while i>=0 and aux[i]!=1 :
        aux[i]=1
        if(a[i]==0):
            break
        i-=1
    i=x+1
    while i<n and aux[i]!=1 :
        aux[i]=1
        if(a[i]==0):
            break
        i+=1
for i in range(n-1):
    if(a[i]+a[i+1]==1 and aux[i]+aux[i+1]==0):
        aux[i]=aux[i+1]=1
        ans+=1
    elif a[i]==a[i+1]==1:
        aux[i+1]=1
print(aux)
for i in range(n):
    if (aux[i]==0):
        ans+=1

print(ans)

