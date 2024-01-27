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
    vector<int> not_x;
    int l = INT_MIN;
    int r = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int k, x;
        cin >> k >> x;
        if (k == 3)
            not_x.push_back(x);
        if (k == 1)
        {
            l = max(l, x);
        }
        if (k == 2)
        {
            r = min(r, x);
        }
    }
    int ans = r - l + 1;
    if (ans <= 0)
    {
        cout << "0\n";
        return;
    }
    for (int x : not_x)
    {
        if (x >= l && x <= r)
            ans--;
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}