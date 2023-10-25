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
    int n, m, k, H,x,ans=0;
    cin >> n >> m >> k >> H;
    int h[n + 1];
    for (int i = 0; i < n;i++){
        cin >> x;
        if(abs(H-x)%k==0 && (H!=x)){
            if(abs(H-x)/k<m)
                ans++;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}