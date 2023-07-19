#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
#define int long long
using namespace std;
 
#ifdef LOCAL
#include "debuglib.h"
#else
#endif
 
const int INF=1e8;
const int M=1e9+7;
pair<int,int> calculate(vector<int> v,int h,int m){
    int sc = 0, penalty = 0,time=0;
    if (v[0]>h)
        sc = 0;
    else{
        sc = 1;
        penalty = v[0];
    }
    for (int i = 1; i < m;i++){
        v[i] = v[i - 1]+v[i];
        if (v[i]>h)
            break;
        sc = i + 1;
        penalty += v[i];
    }
    return make_pair(sc, penalty);
}

void test_case()
{
    int n, m, h, i,t;
    cin >> n >> m >> h;
    vector<vector<int>> time(n);
    for (i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> t;
            time[i].emplace_back(t);
        }
        sort(time[i].begin(), time[i].end());
    }
    vector<pair<int, int>> score(n);
    for (int i = 0; i < n;i++)
    {

        score[i] = calculate(time[i],h,m);
    }
    int ans = 1,sc=score[0].first,penalty=score[0].second;
    for (int i=1; i < n;i++){
        if(score[i].first>sc){
            ans += 1;
        }
        else if(score[i].first==sc && score[i].second<penalty){
            ans += 1;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}