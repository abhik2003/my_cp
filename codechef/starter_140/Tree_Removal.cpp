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

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int min_index;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<mini){
            min_index = i;
            mini = v[i];
        }
    }
    // cout << mini << endl;
    vector<int> degree(n), ans;
    vector<vector<int>> graph(n);

    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        degree[u - 1]++;
        degree[v - 1]++;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }

    queue<int> q;
    for (int i = 0; i < n;i++){
        if(degree[i]==1 && i!=min_index)
            q.push(i);
    }

    int cnt = 0;
    while (!q.empty())
    {
        int x = q.front();
        ans.push_back(q.front());
        q.pop();
        cnt++;

        for(int v: graph[x]){
            degree[v]--;
            if(degree[v]==1 && v!=min_index){
                q.push(v);
            }
        }

        // if (cnt==(n-2))
        //     break;
    }
    cout << ans.size() << endl;
    for (int x : ans)
    {
        cout << x + 1 << " ";
    }
    cout << endl;
    // int op1 = v[q.front()];
    // q.pop();
    // int op2 = v[q.front()];
    // cout << max({op1, op2})+1<<endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}