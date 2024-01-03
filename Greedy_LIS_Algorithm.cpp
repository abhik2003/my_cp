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
    int n, x;
    cin >> n >> x;
    if (n == 1)
    {
        if (x == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "-1\n";
        }
        return;
    }

    if (x > (n - 2))
    {
        cout << "-1\n";
        return;
    }
    cout << x + 2 << " ";
    for (int i = 1; i <= n; i++)
    {
        if (i != (x + 2))
            cout << i << " ";
    }
    cout << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}