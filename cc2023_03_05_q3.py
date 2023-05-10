# for p in range(2):
#     for q in range(2):
#         for r in range(2):
#             x=(r|p)-(q&p)
#             print(p,q,r,x)

for _ in range (int(input())):
    a,b,c=map(int,input().split())
    t=(a^b)&(int(pow(2,c)-1))
    count=0
    for i in range(c):
        if (int(pow(2,i)))&t !=0:
            count+=1
            
    print(int(pow(2,count)))