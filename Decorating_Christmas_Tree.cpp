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
    int n, x, y;
    cin >> n >> x >> y;

    if (n > x)
    {
        cout << "NO\n";
        return;
    }
    n -= y / 3;
    x -= y / 3;
    if (x > 0)
        n -= x / 2;

    if (n <= 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}