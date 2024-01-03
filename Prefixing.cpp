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
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];

    int maxi = 0;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        maxi = max(maxi, a[i]);
        if(mp[a[i]]){
            b[i] = -1;
            // cout << maxi<<" ";
        }
        else{
            b[i] = a[i];
            // cout << a[i] << " ";
        }
        mp[a[i]] = 1;
    }
    for(auto x:b){
        if(x==-1){
            cout << maxi << " ";
        }
        else{
            cout << x << " ";
        }
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