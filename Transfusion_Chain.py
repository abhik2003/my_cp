for _ in range (int(input())):
    n=int(input())
    b=list(map(str,input().split()))
    # for i in range(n):
    #     if b[i]=="A":
    #         b[i]=1
    #     elif b[i]=="B":
    #         b[i]=2
    #     elif b[i]=="O":
    #         b[i]=0
    #     else:
    #         b[i]=3
    ans=b.count("AB")+max(b.count("A"),b.count("B"))+b.count("O")
    print(ans)
    