for _ in range(int(input())):
    n=input()
    n_size=len(n)
    
    ans = []
    
    for a in range(1,10001):
        minB=n_size*a-6
        maxB=n_size*a-1
        
        for b in range(max(minB,1),min(10000,maxB)+1):
            effective_len = n_size*a-b
            full = effective_len//n_size
            
            ns=""
            for i in range(full):
                ns+=n
            ns+=n[:effective_len%n_size]
            
            ns=int(ns)
            
            na_b=int(n)*a-b
            if ns==na_b:
                ans.append([a,b])
    print(len(ans))
    for x in ans:
        print(*x)