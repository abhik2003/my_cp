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

vector<int> solve(int n){
    vector<int> ans = {-1, -1, -1};
    if(n<3){
        return ans;
    }
    if(n==3){
        ans = {1, 1, 1};
        return ans;
    }
    if((n%4) ==0){
        ans = solve(n / 4);
        for(auto &x:ans)
            x *= 4;
        return ans;
    }
    if(n&1){
        ans = {n / 2, 1, 1};
        return ans;
    }
    else{
        ans = {(n - 2) / 2, 2, 2};
        return ans;
    }
}

void test_case()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans = solve(n);
    for(auto x:ans){
        if(x<0){
            cout << "-1" << endl;
            return;
        }
        cout << x <<" ";
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