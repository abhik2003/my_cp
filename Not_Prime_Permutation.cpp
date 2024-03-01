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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1 || n == 2)
    {
        cout << "-1\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cout << 3 << " ";
        }
        else if (v[i] == 3)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << v[i] << " ";
        }
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