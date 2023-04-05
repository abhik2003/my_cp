def concate(s1,s2,choice):
    if (choice==1 and s1=='0'):
        # print("1st")
        return s1+s2
    elif(choice==2 and s1=='1'):
        # print("1st2")
        return s1+s2
    else:
        # print("last")
        return s2+s1
    
def test_case():
    n=int(input())
    i=0
    s=input()
    ans=""
    while (i<(n/2)):
        ans=concate(s[i],ans,1)
        if((n-1)/2!=i):
            ans=concate(s[n-i-1],ans,2)
        i+=1
    print(ans)    

t=int(input())    
while t:
    test_case()
    t-=1