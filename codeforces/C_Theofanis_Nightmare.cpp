#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 

const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    ll n;
    cin >> n;
    vector<ll> v(n),suf(n);
    ll ans = 0;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        ans += (i + 1) * v[i];
    }
    suf[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--){
        suf[i] = suf[i + 1] + v[i+1];
    }

    for (int i = 1; i < n;i++){
        ll profit = v[i] * (-1) - suf[i];
        if(profit>0){
            ans += profit;
        }
    }
    cout << ans * ans<< endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}