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
    string s;
    cin >> s;
    int ans = 0;
    int c = 1;
    int v;
    for (int i = 0; i < 4;i++){
        v = s[i] - '0';
        if(v==0)
            v = 10;
        ans += abs(v - c);
        c = v;
    }
    cout << ans+4 << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}