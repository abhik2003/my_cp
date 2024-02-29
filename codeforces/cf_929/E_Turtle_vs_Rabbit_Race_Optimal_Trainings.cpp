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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, u;
        cin >> l >> u;
        l--;
        int vl = (l == 0) ? 0 : v[l - 1];
        int target = vl + u;
        vector<int>::iterator lower, upper;
        lower = lower_bound(v.begin(), v.end(), target);
        int ind = lower - v.begin();
        int ans = INT64_MIN;
        int ans_;
        // cout << ind << endl;
        if (ind > 0)
        {
            int k = v[ind - 1] - ((l == 0) ? 0 : v[l - 1]);
            int temp = k * u - k * (k - 1) / 2;
            ans_ = ind - 1;
            ans = max(ans, temp);
        }
        if (ind < n)
        {
            int k = v[ind] - ((l == 0) ? 0 : v[l - 1]);
            int temp = k * u - k * (k - 1) / 2;
            if (temp > ans)
            {
                ans_ = ind;
                ans = max(ans, temp);
            }
        }
        if ((ind + 1) < n)
        {
            int k = v[ind + 1] - ((l == 0) ? 0 : v[l - 1]);
            int temp = k * u - k * (k - 1) / 2;
            if (temp > ans)
            {
                ans_ = ind + 1;
                ans = max(ans, temp);
            }
        }
        cout << max(l + 1, ans_ + 1) << " ";
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