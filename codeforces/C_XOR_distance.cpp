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
    ll a, b, r;
    cin >> a >> b >> r;
    ll temp = a ^ b;
    ll x = 0;
    ll one = 1;
    int mx_bit = 0;
    for (int i = 0; i <= 63; i++)
    {
        if (temp & (one << i))
            mx_bit = i;
    }
    bool case_ = (a & (one << mx_bit)) != 0;
    bool skipped = (temp <= r);
    if ((one << mx_bit) & r)
    {
        skipped = true;
    }
    // cout << temp << " " << r << case_ << endl;
    if (case_)
    {
        for (int i = mx_bit - 1; i >= 0; i--)
        {
            if ((one << i) & (temp & a))
            {
                if ((one << i) & r || skipped)
                {
                    x ^= (one << i);
                    // break;
                }
            }
            else if ((one << i) & r)
            {
                skipped = true;
            }
        }
    }
    else
    {
        for (int i = mx_bit - 1; i >= 0; i--)
        {
            if ((one << i) & (temp & b))
            {
                if ((one << i) & r || skipped)
                {
                    x ^= (one << i);
                    // break;
                }
            }
            else if ((one << i) & r)
            {
                skipped = true;
            }
        }
    }
    // cout << x << endl;
    ll ans = (a ^ x) - (b ^ x);
    cout << abs(ans) << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}