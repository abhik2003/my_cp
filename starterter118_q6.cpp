#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;

#ifdef LOCAL
#include "debuglib.h"
#else
#endif

void makeLPS(string &p, int M, int *lps);

int kmp(string &p, string &s)
{
    int M = p.length();
    int N = s.length();
    int ans = 0;

    int lps[M];

    makeLPS(p, M, lps);

    int i = 0;
    int j = 0;
    while ((N - i) >= (M - j))
    {
        if (p[j] == s[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            ans++;
            j = lps[j - 1];
        }

        else if (i < N && p[j] != s[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }

    return ans;
}

void makeLPS(string &p, int M, int *lps)
{
    int n = 0;

    lps[0] = 0;

    int i = 1;
    while (i < M)
    {
        if (p[i] == p[n])
        {
            n++;
            lps[i] = n;
            i++;
        }
        else
        {
            if (n != 0)
            {
                n = lps[n - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
long modpow(long b, long e, long mod)
{
    b %= mod;
    long ans = 1;
    while (e > 0)
    {
        if (e & 1)
            ans = (ans * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
    return ans;
}
void test_case()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    string s1, s2, rev;
    rev = s;
    reverse(rev.begin(), rev.end());
    s1 = s + rev;
    s2 = rev + s;
    int case1 = kmp(s, s1);
    int case2 = kmp(s, s2);
    int mod = 1e9 + 7;
    long count1 = modpow(2, k - 1, mod);
    long count2 = count1 - 1;
    // cout << count1 << " " << count2 << endl;
    // cout << case1 << " " << case2 << endl;
    long ans = 0;
    if (s == rev)
    {
        ans -= 2 * count2;
    }
    else
    {
        ans -= count2;
    }
    count1 *= case1;
    count2 *= case2;
    ans += count1 + count2;
    cout << ans % mod << endl;
}
int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}
