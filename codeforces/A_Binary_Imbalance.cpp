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
    string s;
    cin >> s;
    int one = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='1')
            one++;
    }
    if(one==n){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}