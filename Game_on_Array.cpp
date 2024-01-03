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
    int n;
    cin >> n;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
            odd += x;
        else
            even += x;
    }
    if (n == 1)
    {
        if (even == 1)
            cout << "Bob\n";
        else
            cout << "Alice\n";

        return;
    }
    if ((odd + even) & 1)
    {
        cout << "Bob\n";
        return;
    }
    int rounds = (odd + even) >> 1;
    int flag = odd & 1; // 1 ->odd
    if (rounds & 1)
    {
        if (flag)
        { // odd
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
    else
    {
        if (flag)
        { // odd
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
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