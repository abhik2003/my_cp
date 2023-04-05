for _ in range (int(input())):
    n,y=map(int,input().split())
    a=list(map(int,input().split()))
    tot_or=0
    for x in a:
        tot_or=tot_or|x
    flag=True    
    for x in range(21):
        if(y & pow(2,x)==0 and tot_or & pow(2,x)!=0):
            flag=False
            print("-1")
            break
    if(flag):
        ans=0
        for x in range(21):
            if(tot_or & pow(2,x)==0 and y & pow(2,x)!=0):
                ans+=pow(2,x)
        print(int(ans))        
                
            
