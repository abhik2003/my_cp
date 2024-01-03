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
    if ((n & 1) == 0)
    {
        cout << "-1\n";
        return;
    }
    int n2 = n * n;
    vector<vector<int>> v;
    vector<pair<int, int>> v2; // odd even
    for (int i = 1; i <= n; i++)
    {
        vector<int> temp(2 * i - 1);
        v.push_back(temp);
        v2.push_back({0, 2 * i - 1});
    }
    v2[0] = {1, 0};
    int odd = n2 / 2;
    int i = n - 1;
    while (odd > 0)
    {
        v2[i].first = min(v2[i].second - 1, odd);
        v2[i].second -= v2[i].first;
        odd -= v2[i].first;
        i--;
    }

    vector<vector<int>> mat(n, vector<int>(n));
    int o = 1, e = 2;
    int x1 = 1, y1 = 0;
    int x2 = 0, y2 = -1;
    for (int i = 0; i < n; i++)
    {
        int x = 0, y = i;
        bool flag = true;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v2[i].first)
            {
                v2[i].first--;
                v[i][j] = o;
                o += 2;
            }
            else
            {
                v[i][j] = e;
                e += 2;
            }
        }
        for (int j = 0; j < v[i].size(); j++)
        {
            if (flag)
            {
                // cout << x + x1 << " " << y + y1 << endl;
                mat[x][y] = v[i][j];
                if (x == y)
                {
                    flag = false;
                    y--;
                    continue;
                }
                x++;
            }
            else
            {
                // cout << x + x2 << " " << y + y2 << endl;
                mat[x][y--] = v[i][j];
                // y--;
            }
        }
        // cout << endl;
    }
    for (auto y : mat)
    {
        for (auto x : y)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    //     for (auto x : v2)
    //     {
    //         cout << x.first << " " << x.second << endl;
    //     }
    // cout << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}