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
    int target = n / 2 + 1;
    int i = 0;
    for (i = 0; i < n - target; i++)
    {
        cout << 'P';
        if (s[i] == 'R')
            target--;
        if (target == 0)
            break;
    }
    // cout << target;
    if (target)
    {
        for (; i < n; i++)
        {
            if (s[i] == 'R')
                cout << 'P';
            if (s[i] == 'P')
                cout << 'S';
            if (s[i] == 'S')
                cout << 'R';
            // target--;
            // if (target == 0)
            //     break;
        }
    }
    else
    {
        for (; i < n - 1; i++)
            cout << 'P';
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