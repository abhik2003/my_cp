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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    if(k>=3){
        cout << "0\n";
        return;
    }
    sort(v.begin(), v.end());
    if(k==1){
        int ans = v[0];
        for (int i = 1; i < n;i++){
            ans = min(ans, v[i] - v[i - 1]);
        }
        cout << ans << endl;
        return;
    }
    //k=2
    int ans = v[0];
    vector<int>::iterator lower, upper;

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            int x = v[j] - v[i];
            ans = min(ans, x);
            lower = lower_bound(v.begin(), v.end(), x);
            if((lower-v.begin())<n){
                int t = v[lower - v.begin()];
                t = abs(t - x);
                ans = min(ans, t);
                if(t!=0 && (lower-v.begin()-1)>=0){
                    t=v[lower - v.begin() -1];
                    t = abs(t - x);
                    ans = min(ans, t);
                }
            }
            upper = upper_bound(v.begin(), v.end(), x);
            if((upper-v.begin())<n){
                int t = v[upper - v.begin()];
                t = abs(t - x);
                ans = min(ans, t);
            }

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