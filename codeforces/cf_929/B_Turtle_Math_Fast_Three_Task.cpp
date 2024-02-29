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
    int n;
    int sum = 0;
    cin >> n;
    // set<int> s;
    bool one = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x % 3;
        // s.insert(x % 3);
        if ((x % 3) == 1)
        {
            one = true;
        }
    }
    if ((sum % 3) == 0)
    {
        cout << 0 << endl;
        return;
    }
    if ((sum % 3) == 2)
    {
        cout << 1 << endl;
        return;
    }
    if ((sum % 3) == 1)
    {
        if (one)
        {

            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        return;
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