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

map<int, int> solve(int node, vector<vector<int>> &tree, int par, vector<int> &v, int &ans)
{
    // cout << node << endl;
    map<int, int> ump;
    int f = 1;
    int ch_sum = 0;
    for (int ch : tree[node])
    {
        if (ch == par)
            continue;
        f = 0;

        auto x = solve(ch, tree, node, v, ans);
        for (auto it : x)
        {
            ump[it.first + 1] += it.second;
        }
        ch_sum += v[ch];
    }
    if (f)
    {
        // leaf
        ump[1] = 1e15;
        return ump;
    }
    if (ch_sum < v[node])
    {
        int req = v[node] - ch_sum;
        for (auto it : ump)
        {
            int c = it.first;
            int f = it.second;

            int m = min(req, f);
            req -= m;
            // cout << node <<"-"<< m<<"|"<<c<<endl;
            ans += m * (c - 1);
            if (req == 0)
                break;
        }
    }
    else
    {
        int cnt = ch_sum - v[node];
        if (cnt)
        {
            ump[1] += cnt;
        }
    }

    return ump;
}
void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> tree(n);
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        x--;
        tree[x].push_back(i + 1);
        tree[i + 1].push_back(x);
    }

    int ans = 0;
    // vector<vector<int>> &tree;
    solve(0, tree, -1, v, ans);
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