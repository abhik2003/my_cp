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

int mini = INT_MAX;
int maxi = INT_MIN;
int cnt = 0;
int helper(vector<vector<int>> &dp, vector<int> &mp_, int ind, int y)
{
    if(ind==mp_.size())
        return dp[ind][abs(y)]=0;

    int x = 0;

    mini = min(mini, y);
    // maxi = max(maxi, ind);

    // cout << "y" << y << endl;
    if (dp[ind][abs(y)]!=-1)
    {
        // cout << "x";
        return dp[ind][abs(y)];
    }
    cnt++;
    int f = mp_[ind];
    if(f+y<=0){
        int op1 = helper(dp, mp_, ind + 1, y + f )-1;
        int op2 = helper(dp, mp_, ind + 1, y - 1);
        return dp[ind][abs(y)] = min(op1, op2);
    }
    else{
        return dp[ind][abs(y)] = helper(dp, mp_, ind + 1, y - 1);
    }

}

    void test_case()
{
    mini = INT_MAX;
    maxi = INT_MIN;
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> mp_;
    for(auto it: mp){
        mp_.push_back( it.second);
    }
    int n_ = mp_.size();
    // vector<unordered_map<int, int>> dp(n_ + 1);
    vector<vector<int>> dp(n_ + 1, vector<int>(n + 1, -1));

    int y = 0;
    int i = 0;
    int a = 0;
    int ans = mp.size();

    ans += helper(dp, mp_, 0, 0);
    cout << ans << endl;
    // cout << mini << " " << endl;
    // cout  << n<< endl;
    // cout << mp_.size()<<endl;
    // cout << cnt << endl;
}

int32_t main()
{
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}