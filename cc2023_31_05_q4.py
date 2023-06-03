# for _ in range (int(input())):
#     n,k=map(int,input().split())
#     a=list(map(int,input().split()))
#     if n<k:
#         print(0)
#     else:
#         ans=0
#         while True:
#             j=-1
#             a.sort(reverse=True)
#             n=len(a)
#             # print(a)
#             for i in range(k-1,n,k):
#                 # print(a[i])
#                 ans+=a[i]
#             for i in range(n):
#                 if i%k==0:
#                     j+=k
#                 if j<n:
#                     a[i]-=a[j]
#             a=[i for i in a if i!=0]
#             if len(a)<k:
#                 break
#         print("ans",ans)
            
            
for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    lo, hi = 0, sum(a)//k + 1
    while lo+1 < hi:
        mid = (lo + hi)//2
        have, need = 0, mid * k
        for x in a: have += min(x, mid)
        if have >= need: lo = mid
        else: hi = mid
    print(lo)