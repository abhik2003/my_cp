def bin_to_int(s):
    ans=0
    for i in range(len(s)):
        ans*=2
        ans+=int(s[i])
    return ans    

for _ in range (int(input())):
    n=int(input())
    if n==0:
        print("3 2 4 6")
        continue
    x=bin(n)
    s=str(x)
    s=s[2:]
    a="10"
    b="00"
    c="01"
    d="01"
    for i in range(len(s)):
        if s[i]=='1':
            d+='1'
            c+='0'
            b+='1'
            a+='0'
        else:
            d+='0'
            c+='0'
            b+='0'
            a+='1'    
    A=bin_to_int(a)
    B=bin_to_int(b)
    C=bin_to_int(c)
    D=bin_to_int(d)
    flag=((A&B)|C)^D
    # if flag!=n:
    #     print("No")
    print(A," ",B," ",C," ",D)