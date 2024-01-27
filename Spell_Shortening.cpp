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
    string s;
    cin >> s;
    int ind = n - 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            ind = i - 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != ind)
        {
            cout << s[i];
        }
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