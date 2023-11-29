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
    char op;
    int l, r;
    multiset<int> ms_left,ms_right;
    for (int i = 0; i < n;i++){
        cin >> op >>l >>r;
        if(op=='+'){
            ms_left.insert(l);
            ms_right.insert(r);
        }
        else{
            ms_left.erase(ms_left.find(l));
            ms_right.erase(ms_right.find(r));
        }

        if(*max_element(ms_left.begin(),ms_left.end())>*min_element(ms_right.begin(),ms_right.end())){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}

int32_t main(){
    fastio;
    int t=1;

    test_case();
}