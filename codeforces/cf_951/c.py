import sys
import math
from functools import reduce

input = sys.stdin.read

def test_case():
    data = input().split()
    idx = 0
    
    t = int(data[idx])
    idx += 1
    
    results = []
    
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        v = list(map(int, data[idx:idx + n]))
        idx += n
        
        k = v[0]
        
        def lcm(x, y):
            return (x * y) // math.gcd(x, y)
        
        lcm_val = reduce(lcm, v, k)
        
        ans = [lcm_val // vi for vi in v]
        tot = sum(ans)
        
        if any(vi * ai <= tot for vi, ai in zip(v, ans)):
            results.append("-1")
        else:
            results.append(" ".join(map(str, ans)))
    
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    test_case()
