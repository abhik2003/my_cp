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
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
using namespace std;
 
const int INF=1e8;
const int M=1e9+7;

void dfs(int s, int t, int par, vector<int> &path, vector<vector<int>>& tree, vector<int>& ans)
{
    if(s==t){
        // path.push_back(t);
        ans = path;
        return;
    }
    // path.push_back(s);
    for (int adj : tree[s])
    {
        if(adj!=par){
            path.push_back(adj);
            dfs(adj, t, s, path, tree, ans);
            path.pop_back();
        }
    }
}

int maxdist(int s, int par, vector<vector<int>> &tree){
    int ans = 0;
    for (int adj : tree[s])
    {
        if(adj!=par){
            ans = max(ans, 1 + maxdist(adj, s, tree));
        }
    }
    return ans;
}

void test_case()
{
    int n;
    int a, b;
    cin >> n;
    cin >> a >> b;
    a--;
    b--;
    vector<vector<int>> tree(n);

    for (int i = 0; i < n - 1;i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    vector<int> path = {a}, ans;
    dfs(a, b, -1, path, tree, ans);
    // for(int x : ans)
    //     cout << x << " ";
    // cout << endl;
    if(ans.size()&1){
        int root = ans[ans.size() / 2];
        int dist = ans.size() / 2;
        // cout << dist << endl;
        dist += (n - 1) * 2;
        // cout << dist << endl;
        dist -= maxdist(root, -1, tree);
        cout << dist << endl;
    }
    else{
        int root = ans[ans.size() / 2];
        int dist = ans.size() / 2 + 1;
        if(dist==2 && tree[a].size()==1)
            dist--;
        dist -= maxdist(root, -1, tree);
        dist += (n - 1) * 2;
        cout << dist << endl;

    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}