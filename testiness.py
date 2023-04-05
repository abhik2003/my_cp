t=int(input())
while t:
    a=int(input())
    b=int(input())
    c=int(input())
    d=int(input())
    testiness=0
    if a>b:
        testiness+=a
    else:
        testiness+=b
    if c>d:
        testiness+=c
    else:
        testiness+=d
    print(testiness)                
    t-=1