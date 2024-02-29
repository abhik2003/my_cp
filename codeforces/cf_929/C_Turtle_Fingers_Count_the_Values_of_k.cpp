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

int myPow(int x, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return x;

    int tmp = myPow(x, p / 2);
    if (p % 2 == 0)
        return tmp * tmp;
    else
        return x * tmp * tmp;
}

void test_case()
{
    int a, b, l;
    cin >> a >> b >> l;
    int ac = 0;
    int bc = 0;
    int l_ = l;
    while ((l_ % a) == 0)
    {
        l_ /= a;
        ac++;
    }
    l_ = l;
    while ((l_ % b) == 0)
    {
        l_ /= b;
        bc++;
    }
    unordered_set<int> s;
    for (int i = 0; i <= ac; i++)
    {
        for (int j = 0; j <= bc; j++)
        {
            int temp = myPow(a, i) * myPow(b, j);
            if ((l % temp) == 0)
            {
                s.insert(l / temp);
            }
        }
    }
    cout << s.size() << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}