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

const int INF = 1e8;
const int M = 1e9 + 7;

void test_case()
{
    ll n;
    cin >> n;
    ll ans;
    if (n & 1)
    {
        n = n / 2;
        ans = n * (n + 1) + 1 + n;
        cout << ans << endl;
    }
    else
    {
        n = n / 2;
        ans = n * (n + 1);
        cout << ans << endl;
    }
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}