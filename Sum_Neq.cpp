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

    vector<int> pre_min(n), pre_min2(n), pre_max(n), pre_max2(n), suf_min(n), suf_min2(n), suf_max(n), suf_max2(n);
    pre_min[0] = v[0];
    pre_min2[0] = 1e9;
    pre_max[0] = v[0];
    pre_max2[0] = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] <= pre_min[i - 1])
        {
            pre_min2[i] = pre_min[i - 1];
            pre_min[i] = v[i];
            // cout << pre_min[i] << endl;
        }
        else
        {
            pre_min[i] = pre_min[i - 1];
            pre_min2[i] = min(v[i], pre_min2[i - 1]);
        }

        if (v[i] >= pre_max[i - 1])
        {
            pre_max2[i] = pre_max[i - 1];
            pre_max[i] = v[i];
        }
        else
        {
            pre_max[i] = pre_max[i - 1];
            pre_max2[i] = max(v[i], pre_max2[i - 1]);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre_min[i] << " " << pre_min2[i] << endl;
    // }

    suf_min[n - 1] = v[n - 1];
    suf_min2[n - 1] = 1e9;
    suf_max[n - 1] = v[n - 1];
    suf_max2[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] <= suf_min[i + 1])
        {
            suf_min2[i] = suf_min[i + 1];
            suf_min[i] = v[i];
        }
        else
        {
            suf_min[i] = suf_min[i + 1];
            suf_min2[i] = min(v[i], suf_min2[i + 1]);
        }

        if (v[i] >= suf_max[i + 1])
        {
            suf_max2[i] = suf_max[i + 1];
            suf_max[i] = v[i];
        }
        else
        {
            suf_max[i] = suf_max[i + 1];
            suf_max2[i] = max(v[i], suf_max2[i + 1]);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << pre_min[i] << " " << pre_min2[i] << endl;
    //     // cout << suf_min[i] << " " << suf_min2[i] << endl;
    //     // cout << suf_max[i] << " " << suf_max2[i] << endl;
    // }
    bool flag = false;
    for (int i = 1; i < n - 2; i++)
    {
        if ((pre_min2[i] + pre_min[i]) != (suf_max2[i + 1] + suf_max[i + 1]))
        {
            flag = true;
        }
        if ((pre_max2[i] + pre_max[i]) != (suf_min2[i + 1] + suf_min[i + 1]))
        {
            flag = true;
        }
        // cout << flag << endl;
    }

    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {

        cout << "NO" << endl;
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