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

void solve(string &s, int &ans, int i, set<char> &start, int n)
{
    ans += start.size();
    if (i == n)
        return;
    start.insert(s[i]);
    solve(s, ans, i + 1, start, n);
}
void test_case()
{
    int ans = 1;
    string s;
    int n;
    cin >> n;
    cin >> s;
    set<char> start;
    start.insert(s[0]);
    start.insert(s[1]);
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << start.size() + 1 << endl;
        return;
    }
    solve(s, ans, 2, start, n);
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