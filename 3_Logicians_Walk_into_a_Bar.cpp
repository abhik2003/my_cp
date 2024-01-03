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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string op = "IDK";
    for (int i = 0; i < n;i++){
        if(op=="NO"){
            cout << op << endl;
        }
        else if(op=="IDK" && s[i]=='0'){
            op = "NO";
            cout << op << endl;
        }
        else if(op=="IDK" && i!=(n-1)){
            cout << op << endl;
        }
        else{
            cout << "YES" << endl;
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