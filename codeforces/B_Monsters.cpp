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
    int n, k,x;
    cin >> n>> k;
    vector < pair<int, int>> v;
    for (int i = 0; i < n;i++){
        cin >> x;
        if(x%k)
            v.emplace_back(make_pair(x%k, i));
        else
            v.emplace_back(make_pair(k, i));
    }
    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0;i--)
    {
        cout << v[i].second+1 << " ";
    }
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}