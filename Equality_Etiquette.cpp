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
bool check(int n, int x)
{
    int upper = x * (2 * x + 1);
    int lower = 0;
    return (n >= lower && n <= upper);
}
bool check2(int n, int x)
{
    int u = n * (n + 1) / 2;
    int l = 0;
    return (x >= l && x <= u);
}
void test_case()
{
    int m, n;
    cin >> m >> n;
    int d = abs(m - n);
    if (d == 0)
    {
        cout << 0 << endl;
        return;
    }
    int sqr = sqrt(2 * d);
    if (d & 1)
    {
        int x;
        if (((sqr + 1) / 2) & 1)
        {
            x = (sqr + 1) / 2;
        }
        else
        {
            x = (sqr + 1) / 2 + 1;
        }
        if ((x - 2) > 0 && check(d, x - 2))
        {
            x = x - 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        if ((x) > 0 && check(d, x))
        {
            // x = x - 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        if ((x + 2) > 0 && check(d, x + 2))
        {
            x = x + 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        cout << -1 << endl;
        return;
    }
    else
    {
        int x;
        if (((sqr + 1) / 2) & 1)
        {
            x = (sqr + 1) / 2 + 1;
        }
        else
        {
            x = (sqr + 1) / 2;
        }
        if ((x - 2) > 0 && check(d, x - 2))
        {
            x = x - 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        if ((x) > 0 && check(d, x))
        {
            // x = x - 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        if ((x + 2) > 0 && check(d, x + 2))
        {
            x = x + 2;
            if (check2(2 * x - 1, d))
            {
                cout << 2 * x - 1 << endl;
            }
            else
            {
                cout << 2 * x << endl;
            }
            return;
        }
        cout << -1 << endl;
        return;
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