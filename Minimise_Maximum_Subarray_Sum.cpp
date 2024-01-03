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
    int x, y;
    cin >> x >> y;
    // int ans = 1;
    if (y >= x)
    {
        cout << 1 << endl;
        return;
    }
    int max_ = (x + y) / (y + 1);
    int extra = max_ * (y + 1) - x;
    vector<int> v;
    int x_ = x;
    // cout << extra << " " << max_ << endl;
    int ans1 = (max_ - 2) * ((x - extra * (max_ - 1)) / max_);
    int ans2 = ans1 + extra * (max_ - 3);
    int ans3 = max_;
    if (((x - extra * (max_ - 1)) / max_))
    {
        ans1 += 2;
    }
    // if(extra){
    //     ans2 += 2;
    // }
    cout << max(ans1, max(ans2 + 2, ans3)) << endl;
    // while (extra--)
    // {
    //     v.push_back(max_ - 1);
    //     v.push_back(-2);
    //     x_ -= max_ - 1;
    //     // max_-3 * extra
    // }
    // while (x_ > 0)
    // {
    //     v.push_back(max_);
    //     v.push_back(-2);
    //     x_ -= max_;
    //     //max_ -2 * (x-extra*(max_ - 1))
    // }

    // cout << v.size() << endl;
    // int ans = 0;
    // int cur = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cur += v[i];
    //     cur = max(cur, v[i]);
    //     ans = max(cur, ans);
    // }
    // cout << ans << endl;
    // // int ans = x;
    // int two = (x + max_ - 1) / max_;
    // two--;
    // ans -= 2 * two;
    // cout << max(max_, ans) << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}