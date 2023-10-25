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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int last = 0;
    int ans = 0;
    for (int i = 1; i < n;i++){
        if(v[i]==v[i-1]){
            ans += last;
        }
        else if(v[i]>v[i-1]){
            double t = (double)v[i] / (double)v[i - 1];
            double l = log2(t);
            int zero = 0;
            int temp = last - (int)floor(l);
            temp = max(zero, temp);
            ans += temp;
            last = temp;

        }
        else{
            double t = (double)v[i-1] / (double)v[i];
            double l = log2(t);
            int temp=last+(int)ceil(l);
            ans += temp;
            last = temp;
        }
        // cout << ans<<" ";
    }
    cout << ans <<endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}