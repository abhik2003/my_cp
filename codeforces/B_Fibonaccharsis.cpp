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
    int n, k,ans=0;
    cin >> n >> k;
    if(k>28){
        cout << '0'<<endl;
        return;
    }
    int fib[30];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 30;i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    // cout << fib[28]<<"x"<<endl;
    int i = 0, j;
    while(1){
        for (j = i;;j++){
            int temp = (i * fib[k - 2] + j * fib[k - 1]);
            if(temp==n){
                ans++;
                break;
            }
            else if(temp>n){
                break;
            }
        }
        if(j==i){
            cout << ans << endl;
            return;
        }
        i++;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}