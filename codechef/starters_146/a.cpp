#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cassert>
#include <bitset>
#include <fstream>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
using namespace std;

const int INF = 1e8;
const int M = 1e9 + 7;

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n), p(n), s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        p[i] = v[i];
        s[i] = v[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        p[i] += p[i - 1];
        s[n - 1 - i] += s[n - i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            if (p[i] == s[i])
                ans += 2;
            else if (abs(p[i] - s[i]) == 1)
            {
                ans++;
            }
        }
    }
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