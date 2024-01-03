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
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (auto ch : s)
    {
        if (ch == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    int ans = s.length();
    for (auto ch : s)
    {
        if (ch == '0' && one == 0)
        {
            break;
        }
        else if (ch == '1' && zero == 0)
        {
            break;
        }
        if (ch == '0')
            one--;
        else
            zero--;
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