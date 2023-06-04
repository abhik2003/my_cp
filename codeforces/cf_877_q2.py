for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    one=a.index(1)+1
    two=a.index(2)+1
    n_ind=a.index(n)+1
    if (n_ind-one)*(two-one)<0:
        print(one,n_ind)
        continue
    if(one==1):
        print(2,n_ind)
    elif one==n:
        print(n_ind,n-1)
    else:
        if abs(n_ind-one)>abs(two-one):
            print(two,n_ind)
        else:
            print(one,one)
        
    