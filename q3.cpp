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
    vector<vector<int>> odd((k + 2) / 2), even((k + 1) / 2);
    for (int i = 1, j = 0; i <= n; i += 2)
    {
        odd[j++].push_back(i);
        if (j == (odd.size()))
            j = 0;
    }
    for (int i = 2, j = 0; i <= n; i += 2)
    {
        even[j++].push_back(i);
        if (j == (even.size()))
            j = 0;
    }
    for (int i = 0; i < odd.size(); i++)
    {
        for (int x : odd[i])
            cout << x << ' ';
        if (i < even.size())
        {
            for (int x : even[i])
                cout << x << ' ';
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