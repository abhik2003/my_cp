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

static bool comp(vector<int> &v1, vector<int> &v2)
{
    return ((v1[0] + v1[1]) <= (v2[0] + v2[1]));
}
void test_case()
{
    int n;
    cin >> n;
    // vector<int> a(n), b(n);
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][1];
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i][0] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i][1] << " ";
    }
    cout << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}