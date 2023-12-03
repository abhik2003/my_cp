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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout << '1' << endl;
        return;
    }
    sort(v.begin(), v.end());
    ll gcd_ = v[1] - v[0];
    for (int i = 2; i < n;i++){
        gcd_ = gcd(gcd_, v[i] - v[i - 1]);
    }
    ll ans = 0;
    ll target = v[n - 1];
    for(auto &x:v){
        ans += (target - x) / gcd_;
    }
    ll x = 1e13;
    for (int i = n - 2; i >= 0;i--){
        if((v[i+1]-v[i])>gcd_){
            x = v[i + 1] - gcd_;
            break;
        }
    }
    if(x!=1e13){
        ll option1= (target - x) / gcd_;
        ans += min(option1, (ll)n);
    }
    else{
        ans += n;
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