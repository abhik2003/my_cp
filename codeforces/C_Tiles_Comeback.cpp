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
    cin >> n >> k;
    int v[n + 1];
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int l = 0, r = (n - 1);
    int count=0,f1=0,f2=0;
    for (int i = 0; i < n;i++){
        if(v[i]==v[0])
            count++;
        if(count==k){
            l = i;
            f1 = 1;
            break;
        }
    }
    count=0;
    for (int i = n-1; i >=0;i--){
        if(v[i]==v[n-1])
            count++;
        if(count==k){
            r = i;
            f2 = 1;
            break;
        }
    }
    if(v[0]==v[n-1]){
        if(f1 && f2){

            cout << "YES" << endl;
        }
        else{

            cout << "NO" << endl;
        }
    }
    else if(r>l && f1 && f2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
    t = 2;
    cout << t * (t + 1) / 2;
}