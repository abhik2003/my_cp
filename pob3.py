n=int(input())
x=input()
a=x.split()
for i in range (len(a)):
    a[i]=int(a[i])
x=input()    
b=x.split()
c=[0]*n
for i in range (len(b)):
    b[i]=int(b[i])
    c[i]=a[i]-b[i]
       
c.sort(reverse=True)    

j=n-1
count=0
for i in range(n-1):
    while(i!=j):
        if(c[i]+c[j]>0):
            break
        j-=1
        
    if(i!=j):
        if(c[i]+c[j]>0):
            count+=(j-i)
    else:
        break        
print (count)