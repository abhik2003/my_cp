#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
using namespace std;
 
#ifdef LOCAL
#include "debuglib.h"
#else
#endif
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    int n;
    cin >>n;
    vector<int> v(n),v_(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        v_[i] = v[i];
    }
    if(n==1){
        cout << "0\n";
        return;
    }
    sort(v.begin(), v.end());
    vector<int> prefix(n,0);
    prefix[0] = v[0];
    for (int i = 1; i < n;i++){
        prefix[i] = prefix[i - 1] + v[i];
    }
    vector<int> streak(n,0);
    if(prefix[n-2]>=v[n-1]){
        streak[n - 2] = 1;
    }
    for (int i = n - 3; i >= 0;i--){
        if(prefix[i]>=v[i+1]){
            streak[i] = streak[i + 1] + 1;
        }
    }

    map<int, int> mp;
    for (int i = 0; i < n;i++){
        int ans = i+streak[i];
        mp[v[i]] = max(mp[v[i]], ans);

    }

    for(auto x:v_){
        cout << mp[x] << " ";
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