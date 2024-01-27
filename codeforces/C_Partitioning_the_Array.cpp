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

bool check(vector<int> &v, int k)
{
    if (v.size() == 1)
        return true;
    int n = v.size();
    int m = 0;
    for (int i = 0; i < n - k; i++)
    {
        m = __gcd(m, abs(v[i] - v[i + k]));
    }
    return m != 1;
}
void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check(v, i))
                ans++;
        }
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