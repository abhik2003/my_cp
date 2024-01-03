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
    cin >> n;
    int zero = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            zero++;
        if (x < 0)
            neg++;
    }
    if (zero != 0)
    {
        cout << "0\n";
        return;
    }
    else
    {
        if (neg % 2)
        {
            // odd
            cout << "0\n";
        }
        else
        {
            cout << "1\n1 0\n";
        }
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