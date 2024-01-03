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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] + b[i]) != (a[i - 1] + b[i - 1]))
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        for (auto x : a)
            cout << x << " ";
        cout << endl;
        for (auto x : b)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "-1\n";
    }
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}