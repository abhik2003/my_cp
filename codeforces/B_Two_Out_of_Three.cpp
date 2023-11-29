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
    vector<int> v(n);
    vector<vector<int>> freq(101, vector<int>(0));
    for (int i = 0; i < n;i++){
        cin >> v[i];
        freq[v[i]].push_back(i);
    }
    int count = 0;
    vector<int> ans(n);
    for(auto &x:freq){
        if(x.size()==0)continue;
        if(x.size()>1){
            count++;
        }
        for(auto &y:x){
            ans[y] =( count == 1) ? 2 : 3;
        }
        ans[x[0]] = 1;
    }
    if(count>1){
        for(auto &x:ans)
            cout << x << " ";
        cout << endl;
    }
    else{
        cout<<"-1"<<endl;
    }


}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}