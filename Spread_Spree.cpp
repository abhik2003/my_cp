#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
using namespace std;

#ifdef LOCAL
#include "debuglib.h"
#else
#endif

const int INF = 1e8;
const int M = 1e9 + 7;

void test_case()
{
    int n, m;
    cin >> n >> m;
    int x = max(m, n);
    int row;
    if (x & 1)
    {
        row = x / 2 + 1;
    }
    else
    {
        row = x + 1;
    }
    int mod = 998244353;
    int k = x / 2;
    int upper = min({k + 1, m, n});
    int lower = min(m, n) - k - 1;
    if (lower < 0)
        lower = 0;
    int temp = upper * (upper + 1) / 2 - lower * (lower + 1) / 2;
    temp %= mod;
    int ans = temp * row;
    ans %= mod;
    // cout << lower << " " << upper << endl;
    cout << ans << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}