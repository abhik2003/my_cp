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

int helper(int ind, int c1, int c2, vector<map<int, int>> &v, vector<int> &p, vector<int> &t)
{
    if((c1+c2)==0)
        return 0;
    // cout << -ind << v.size() << endl;
    if (v[ind].find(c1) != v[ind].end())
    {
        return v[ind][c1];
    }
    int ans;
    if(p[ind]>t[ind]){
        if(c1){
            ans = p[ind] + helper(ind + 1, c1 - 1, c2, v, p, t);
        }
        else{
            ans = t[ind] + helper(ind + 1, c1, c2-1, v, p, t);
        }
    }
    else{
        if(c2){
            ans = t[ind] + helper(ind + 1, c1, c2 - 1, v, p, t);
        }
        else{
            ans = p[ind] + helper(ind + 1, c1 - 1, c2, v, p, t);
        }
        
    }
    v[ind][c1] = ans;

    return ans;
}

void test_case()
{
    int n, m, tot;
    cin >> n >> m;
    tot = n + m + 1;
    vector<int> p(tot), t(tot);
    for (int i = 0; i < tot;i++){
        cin >> p[i];
    }
    for (int i = 0; i < tot;i++){
        cin >> t[i];
    }

    vector<vector<int>> pre(tot);
    int c1 = 0, c2 = 0;
    for (int i = 0; i < tot - 1; i++)
    {
        if(p[i]>t[i]){
            if(c1<n){
                c1++;
                pre[i] = {c1, c2, p[i]};
            }
            else{
                c2++;
                pre[i] = {c1, c2, t[i]};
            }
        }
        else{
            if(c2<m){
                c2++;
                pre[i] = {c1, c2, t[i]};
            }
            else{
                c1++;
                pre[i] = {c1, c2, p[i]};
            }
        }
    }

    for (int i = 1; i < tot - 1;i++){
        pre[i][2] += pre[i - 1][2];
    }
    vector<map<int, int>> v(tot);

    vector<int> ans(tot);
    for (int i = tot - 1; i > 0;i--){
        ans[i] = pre[i - 1][2] + helper(i + 1, n - pre[i - 1][0], m - pre[i - 1][1], v, p, t);
    }
    ans[0] = helper(1, n, m, v, p, t);

    for(int x:ans){
        cout << x << " ";
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