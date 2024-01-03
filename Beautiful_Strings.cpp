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
    string s;
    cin >> s;
    vector<int> freq(26,0);
    for(char ch:s){
        freq[ch - 'a']++;
    }
    ll ans = 1;
    ll mod = 1e9 + 7;
    for (int f:freq){
        ans *= (f+1);
        ans %= mod;
    }
    ans -= 1;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}