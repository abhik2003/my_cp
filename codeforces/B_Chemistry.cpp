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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<bool> odd(26, false);
    for(auto c : s)
        odd[c - 'a']= !odd[c-'a'];
    int odd_c = 0;
    for(auto x: odd)
        odd_c += x;

    if(((n-k)&1)==0){
        if(odd_c<=k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if((k>=(odd_c-1)) && ((k-odd_c+1)&1)==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}