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
    ll n;
    cin >> n;
    for (ll k = 2; 1 + k + k * k <= n;k++){
        ll vertex = 1 + k + k * k;
        ll p = 3;
        while(vertex<n){
            vertex += pow(k, p);
            p++;
        }
        if (vertex==n){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}