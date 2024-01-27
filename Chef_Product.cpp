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
    ll num;
    cin >> num;
    if (num == 1)
    {
        cout << "1\n";
        return;
    }
    ll ans = sqrtl(num);
    ll ans_ = ans >> 1;
    // ans >>= 1;
    // cout << ans << endl;
    if ((ans & 1) && (num & 1))
        ans_++;
    cout << ans_ << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}