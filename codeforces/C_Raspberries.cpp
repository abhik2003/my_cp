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
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans=k-1;
    int t;
    if(k!=4){
        for(auto x: v){
            t = (k - x % k) % k;
            ans = t < ans ? t : ans;
        }
        cout << ans << endl;
    }
    else{
        int one=0,two = 0, four = 0, three=0;
        for(auto x:v){
            switch (x%4)
            {
            case 0:
                four = 1;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            
            default:
                break;
            }
            
        }
        if(four){
            cout << "0\n";
        }
        else if(two>=2){
            cout << "0\n";
        }
        else if(three>=1){
            cout << "1\n";
        }
        else if(two==1){
            cout << "1\n";
        }
        else{
            cout << "2\n";
        }
    }

}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}