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

int helper(vector<int> &d, vector<int> &cost, map<int,int>& dp, int x)
{
    if(dp.find(x)!=dp.end())
        return dp[x];
    int n = d.size();
    int ans = 0;
    int l = 0, r = n - 1;
    int ind = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if(d[m]>x){
            l = m + 1;
        }
        else{
            ind = m;
            r = m-1;
        }
    }
    // cout<< x<< "|"<< ind << endl;
    if (ind == -1)
        return dp[x] = 0;
    int x_ = x;
    int full = (x- d[ind]) / cost[ind] + 1;
    ans = full * 2;
    x -= full * cost[ind];
    // cout << ans<<"+"<<x << endl;
    // return -1;

    return dp[x_] = ans + helper(d, cost, dp, x);
}
void test_case()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m),d,cost;
    map<int, int> mp;

    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    for (int i = 0; i < n;i++){
        cin >> b[i];
        int cost = a[i] - b[i];
        if(mp.find(cost)!=mp.end()){
            mp[cost] = min(mp[cost], a[i]);
        }
        else{
            mp[cost] = a[i];
        }
    }
    int cnt = 0;
    for (auto it : mp)
    {
        if(cnt==0){
            d.push_back(it.second);
            cost.push_back(it.first);
            cnt = 1;
        }
        else{
            if(it.second<d.back()){
                d.push_back(it.second);
                cost.push_back(it.first);
            }
        }
    }


    for (int i = 0; i < m;i++){
        cin >> c[i];
    }

    // vector<int> dp(1e6 + 7);
    map<int, int> dp;

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += helper(d, cost, dp, c[i]);
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    // cin >> t;
    while(t--)
        test_case();
}