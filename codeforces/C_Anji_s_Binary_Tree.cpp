#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 

 
const int INF=1e8;
const int M=1e9+7;
int helper(string &s, int node,vector<pair<int, int>>& graph){
    if(graph[node-1].first==0 && graph[node-1].second==0){
        return 0;
    }
    if(graph[node-1].first==0){
        int child = helper(s, graph[node - 1].second, graph);
        if(s[node-1]=='R')
            return child;
        else
            return child + 1;
    }
    else if(graph[node-1].second==0){
        int child = helper(s, graph[node - 1].first, graph);
        if(s[node-1]=='L')
            return child;
        else
            return child + 1;
    }
    else{
        int left_child=helper(s, graph[node - 1].first, graph);
        int right_child=helper(s, graph[node - 1].second, graph);

        if(s[node-1]!='L')
            left_child++;
        if(s[node-1]!='R')
            right_child++;
        return min(left_child, right_child);
    }
}

void test_case()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<pair<int, int>> graph;
    for (int i = 0; i < n;i++){
        int l, r;
        cin >> l >> r;
        graph.push_back({l, r});
    }
    cout << helper(s, 1, graph)<<endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}