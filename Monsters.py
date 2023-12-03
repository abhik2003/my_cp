def SieveOfEratosthenes(num):
    prime = [True for i in range(num+1)]
    p = 2
    while (p * p <= num):
 
        if (prime[p] == True):

            for i in range(p * p, num+1, p):
                prime[i] = False
        p += 1
        
    prime_set=set()
    for p in range(2, num+1):
        if prime[p]:
            prime_set.add(p)
    return prime_set

import math
prime_set=SieveOfEratosthenes(1000000)
for _ in range (int(input())):
    h=int(input())
    if h==1:
        print(1)
        continue
    if h in prime_set:
        print(1)
        continue
    
    # h_log=math.floor(math.log2(h))
    h_log=1
    while (1<<h_log)<=h:
        h_log+=1
    found=False
    for i in range(1,h_log+1):
        req=h-(1<<i)+1
        if req==0:
            print(i)
            found=True
            break
        if req in prime_set:
            print(i+1)
            found=True
            break
        # move+=1
    if found==False:
        print(-1)