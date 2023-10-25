for _ in range (int(input())):
    ip=list(map(int,input().split()))
    a=ip[0:3]
    b=ip[3:]
    a.sort(reverse=True)
    b.sort(reverse=True)
    alice=-1
    for i in range(3):
        if a[i]>b[i]:
            alice=1
            break
        elif a[i]<b[i]:
            alice=0
            break
    if alice==0:
        print("Bob")
    elif alice==1:
        print("Alice")
    else:
        print("Tie")