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
    vector<int> v(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    pre[0] = v[0];
    vector<int> aux;
    aux.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        pre[i] = min(v[i], pre[i - 1]);
        if (pre[i] < v[i])
        {
            ans++;
        }
        else
        {
            aux.push_back(v[i]);
        }
    }

    int ans2 = aux.size();
    for (int i = 0; i < aux.size(); i++)
    {
        ans2 = min(ans2, i + aux[i]);
    }

    cout << ans + ans2 << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}