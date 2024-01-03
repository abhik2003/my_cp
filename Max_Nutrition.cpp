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

void test_case()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n;i++)
        cin >> b[i];
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]] = max(mp[a[i]], b[i]);
    }
    int ans = 0;
    for(auto &it:mp)
        ans += it.second;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}