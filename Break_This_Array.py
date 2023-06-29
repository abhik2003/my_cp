def calculate(p, q):
     
    mod = 1000000007
    expo = 0
    expo = mod - 2
 
    while (expo):
        if (expo & 1):
            p = (p * q) % mod
        q = (q * q) % mod
        expo >>= 1
 
    return p

for p in range(1,100):
    for q in range(1,30):
        if calculate(p,q)==416666673:
            print(p,q)