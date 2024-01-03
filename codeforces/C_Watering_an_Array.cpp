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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    int c = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == (j + 1))
            c++;
    }
    ans = (d - 1) / 2 + c;

    for (int i = 0; i < min(2 * n, d - 1); i++)
    {
        for (int j = 0; j < b[i % k]; j++)
        {
            a[j]++;
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == (j + 1))
                count++;
        }
        ans = max(ans, count + (d - i - 2) / 2);
        // cout << ans << " " << count << endl;
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