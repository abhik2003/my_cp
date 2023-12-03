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
    ll n, p, t, l;
    cin >> n >> p >> l >> t;
    ll temp = (p + 2 * t + l - 1) / (2 * t + l);

    ll weeks = 1 + ((n-1)/ 7);
    if(temp<=(weeks/2)){
        cout << n-temp << endl;
        // cout << 'x' << endl;
        return;
    }

    ll point_practical = (weeks/2) * (2 * t + l) + (weeks& 1l)*(t+l);
    ll left = p - point_practical;
    if(left<0)
        left = 0;
    ll ans = (weeks/2)+ (weeks& 1l) + (left + l - 1) / l;
    cout << n-ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}