#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 
// #ifdef LOCAL
// #include "debuglib.h"
// #else
// #endif
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    string s;
    cin >> s;
    for (char i = '1'; i <= '8';i++){
        if(i!=s[1]){
            cout << s[0]<<i<<endl;
        }
    }
    for (char i = 'a'; i <= 'h';i++){
        if(i!=s[0]){
            cout <<i<<s[1]<<endl;
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