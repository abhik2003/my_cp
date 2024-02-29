#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ALICE cout << "Alice\n";
#define BOB cout << "Bob\n";
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
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {
        ALICE
    }
    else if (b > a)
    {
        if (n <= a)
            ALICE
        else
            BOB
    }
    else
    {
        if (n <= a)
        {
            ALICE
            return;
        }
        n /= (1 + a);
        if (n & 1)
            ALICE
        else
            BOB
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