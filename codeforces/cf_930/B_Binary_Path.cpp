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
    string r1, r2;
    cin >> r1 >> r2;
    int ans = 1;
    string path = "";
    path += r1[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (r2[i] == r1[i + 1])
        {
            ans++;
            path += r2[i];
        }
        else
        {
            if (r2[i] > r1[i + 1])
            {
                ans = 1;
                path += r1[i + 1];
            }
            else
            {
                path += r2.substr(i, n - i);
                break;
            }
        }
    }
    if (path.length() != n + 1)
        path += r2[n - 1];
    cout << path << endl;
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