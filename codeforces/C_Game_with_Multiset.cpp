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
    int q;
    int t, x;
    vector<int> freq(30);
    vector<int> req(30);
    // cin >> q;
    q = 1e6;
    while (q--)
    {
        // cin >> t >> x;
        t = 2;
        x = 1000038;
        if (t == 1)
        {
            freq[x]++;
        }
        else
        {
            for (auto &y : req)
                y = 0;
            bool flag = true;
            for (int i = 29; i >= 0; i--)
            {
                if (x & (1 << i))
                {
                    req[i] += 1;
                }
                // cout << i << " " << req[i] << " " << freq[i] << endl;
                if (req[i] > freq[i])
                {
                    if (i == 0)
                    {
                        cout << "NO" << endl;
                        flag = false;
                        break;
                    }
                    req[i - 1] = 2 * (req[i] - freq[i]);
                }
            }
            if (flag)
                cout << "YES" << endl;
        }
    }
}

int32_t main()
{
    fastio;
    int t = 1;
    // cin >> t;
    while (t--)
        test_case();
}