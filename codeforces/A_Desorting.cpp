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
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int min_gap=1e9;
    for (int i = 0; i < n - 1;i++){
        min_gap = min(min_gap, (v[i + 1] - v[i]));
    }
    if(min_gap<0){
        cout << '0' << endl;

    }
    else{
    cout << (min_gap + 2) / 2 << endl;

    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}