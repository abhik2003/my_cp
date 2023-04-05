for _ in range (int(input())):
    n,t=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[[a[i],b[i],a[i]+b[i]] for i in range(len(a))]
    
    c.sort(key=lambda x : x[2])
    i=0
    aux=[]
    while(i<len(c) and t>=c[i][2]):
        t-=c[i][2]
        aux.append(c[i])
        i+=1
    aux.sort(key=lambda x : x[1])    
    j=len(aux)-1
    ans=i    
    while(i<len(c)):
        if j>=0:
            if aux[j][0]+c[i][2]<=aux[j][2]+c[i][0]:
                if t-(c[i][2]-aux[j][1])>=0:
                    ans+=1
                    t-=c[i][2]-aux[j][1]
                    break
                elif t>=c[i][0]:
                    ans+=1
                    break   
                # print("Hi")        
            elif t>=c[i][0]:
                ans+=1
                break
        elif t>=c[i][0]:
                ans+=1
                break   
        i+=1 
    print(ans)