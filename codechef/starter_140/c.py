import sys

MOD = 10**9 + 9
P = 53

def compute_hash(s):
    hash_value = 0
    p_pow = 1
    ans = []
    for c in s:
        hash_value = (hash_value + (ord(c) - ord('a') + 1) * p_pow) % MOD
        p_pow = (p_pow * P) % MOD
        ans.append(hash_value)
    return ans

def test_case():
    s = input().strip()
    if len(s) % 2 != 0:
        print(0)
        return

    n = len(s)
    pi = [1] * (n + 1)
    p = P
    for i in range(1, n + 1):
        pi[i] = p
        p = (p * P) % MOD

    hash_values = compute_hash(s)
    print(' '.join(map(str, hash_values)))

    ans = 0
    for i in range(0, n + 1, 2):
        l1 = i // 2
        l2 = (n - i) // 2

        h1 = 0 if l1 == 0 else (pi[l1] * hash_values[l1 - 1]) % MOD
        h2 = 0 if l1 == 0 else (hash_values[i - 1] - hash_values[l1 - 1]) % MOD

        h3 = 0 if l2 == 0 else ((hash_values[i + l2 - 1] - hash_values[i - 1] + MOD) % MOD * pi[i + l2 - i]) % MOD
        h4 = 0 if l2 == 0 else (hash_values[n - 1] - hash_values[i + l2 - 1]) % MOD

        h1 = (h1 + MOD) % MOD
        h2 = (h2 + MOD) % MOD
        h3 = (h3 + MOD) % MOD
        h4 = (h4 + MOD) % MOD

        if h1 == h2 and h3 == h4:
            ans += 1

        print(f'{h1}|{h2}|{h3}|{h4}')

    print(ans)

def main():
    t = int(input().strip())
    for _ in range(t):
        test_case()

if __name__ == "__main__":
    main()
