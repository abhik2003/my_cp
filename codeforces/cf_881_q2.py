for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=0
    aux=[]
    for i in range(n):
        if a[i]<0:
            if len(aux)==0 or aux[-1]==0:
                aux.append(1)
        elif a[i]>0:
            if len(aux)==0 or aux[-1]==1:
                aux.append(0)
    sum_=0
    for x in a:
        sum_+=abs(x)
    print(sum_,sum(aux))
            
    