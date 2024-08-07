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
const int MAXN = 300005; // adjust based on problem constraints
const int MAXR = 20;     // number of rounds (i.e., range for i)

int dp[MAXN][MAXR];
int monster[MAXN];

int bfs(int node, int par, int round, vector<vector<int>> &adj)
{
    if (dp[node][round - 1])
        return dp[node][round - 1];

    int ans = INT64_MAX;
    for (int i = 1; i <= 20; i++)
    {
        if (i != round)
        {
            int contribution = monster[node] * i;
            int others = INT64_MAX;

            int adjacent = 0;
            for (int v : adj[node])
            {
                if (par != v)
                    adjacent += bfs(v, node, i, adj);
            }
            others = min(others, adjacent);
            ans = min(ans, others + contribution);
        }
    }

    return dp[node][round - 1] = ans;
}

void test_case()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> monster[i];

    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // memset(dp, -1, sizeof(dp)); // Initialize dp array with -1
    for (int i = 0; i <= n; i++)
    {
        memset(dp[i], 0, sizeof(dp[i]));
    }

    for (int node = 0; node < n; node++)
    {
        int ans = INT64_MAX;
        if (adj[node].size() <= 1)
        {
            for (int i = 1; i <= 20; i++)
            {
                ans = min(ans, bfs(node, -1, i, adj));
            }
            cout << ans << endl;
            return;
        }
    }
}

int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        test_case();
    return 0;
}
