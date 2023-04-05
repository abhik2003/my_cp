# cook your dish here
p,s=map(int,input().split())
sc=[[0]*s for _ in range(p)]
ns=[[0]*s for _ in range(p)]
ans=[[i+1,0] for i in range(p)]
for i in range(p):
    sc[i]=list(map(int,input().split()))
    ns[i]=list(map(int,input().split()))
    zipped_pair=zip(sc[i],ns[i])
    zipped_pair2=zip(sc[i],ns[i])
    sc[i]=[x for x,_ in sorted(zipped_pair)]
    ns[i]=[x for _,x in sorted(zipped_pair2)]
    for j in range(s-1):
        if(ns[i][j]>ns[i][j+1]):
            ans[i][1]+=1
# print(sc) 
# print(ns)
# print(ans)
def my_func(x):
    return x[1]
ans.sort(key=my_func)
for elem in ans:
    print(elem[0])