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
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX;
    while (n--)
    {
        int x;
        cin >> x;
        if (x / k)
        {
            ans = min(ans, x % k);
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {

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