#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 
#ifdef LOCAL
#include "debuglib.h"
#else
#endif
 
const int INF=1e8;
const int M=1e9+7;

int calculate_after(vector<vector<int>>& adj_list,vector<int>& after,vector<int>& before,int node,int depth){
    before[node] = depth;
    if(after[node]!=-1)
        return after[node];
    int ans = 0;
    for(auto  v:adj_list[node]){
        // cout << node << v << endl;
        ans += calculate_after(adj_list, after,before, v,depth+1);
        ans++;
    }
    after[node] = ans;
    return ans;
}

void test_case()
{
    int n;
    cin >> n;
    // cout << "Hi";
    vector<vector<int>> adj_list(n + 1);
    vector<bool> root(n + 1,true);
    for (int i = 0; i < n-1;i++){
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        root[v] = false;
    }
    int root_node;
    for (int i = 1; i <= n;i++){
        if(root[i]){
            root_node = i;
            break;
        }
    }
    vector<int> after(n + 1, -1);
    vector<int> before(n + 1, 0);
    calculate_after(adj_list, after,before, root_node,0);

    vector<int> ans(n + 2);
    for (int i = 1; i < n + 1;i++){
        ans[before[i]+1]++;
        ans[n - after[i] +1]--;
    }
    
    // for (auto x : after)
    //     cout << x << " ";
    // cout << endl;
    // for (auto x : before)
    //     cout << x << " ";
    // cout << endl;
    // for (auto x : ans)
    //     cout << x << " ";
    //     cout << endl;
    cout<<ans[1];
    for (int i = 2; i < n + 1;i++){
        ans[i] += ans[i - 1];
        cout << " " << ans[i];
    }
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}