# https://www.codechef.com/problems/BEAUTGAR
for _ in range (int(input())):
    s=input()
    n=len(s)
    r=0
    g=0
    if(s[0]==s[n-1]):
        if(s[0]=='R'):
            r=1
        else:
            g=1
    for i in range(n-1):
        if(s[i]==s[i+1]):
            if(s[i]=='R'):
                r+=1
            else:
                g+=1  
    if(r==0 and g==0):
        print("yes")
    elif(r==1 and g==1):
        print("yes")
    else:
        print("no")                          
