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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n), prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    int ans = INT_MIN;
    int zero = 0;
    for (int i = 0; i <= k; i++)
    {
        int j = n - i - 1;
        if (j == -1)
        {
            ans = max(ans, zero);
            continue;
        }
        int sum = prefix[j];

        int l = j - x;
        if (l < -1)
            l = -1;

        if (l != -1)
        {
            sum *= (-1);
            sum += 2 * prefix[l];
        }
        else
        {
            sum *= (-1);
        }
        ans = max(ans, sum);
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