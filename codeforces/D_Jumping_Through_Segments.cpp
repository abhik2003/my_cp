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

bool isOk(vector<pair<int, int>> &segment,int jump){
    int l = 0, r = 0;
    int l1, r1;
    for (int i = 0; i < segment.size();i++){
        l1 = segment[i].first;
        r1 = segment[i].second;

        if(r1<=l){
            if((l-r1)>jump)
                return false;

            r = r1;
            l = max(l - jump, l1);
        }
        else if(l1<=r){
            l = max(l - jump, l1);
            r = min(r + jump, r1);
        }
        else {
            if((l1-r)>jump)
                return false;

            l = l1;
            r = min(r + jump, r1);
        }
    }
    // cout <<"d"<< jump << "c" << endl;
    return true;
}

void test_case()
{
    int n;
    cin >> n;
    vector<pair<int, int>> segment;
    int mini, maxi = 0;
    int l, r;
    for (int i = 0; i < n;i++){
        cin >> l >> r;
        segment.push_back({l, r});
    }
    if(n==1){
        // cout << segment[0].first << endl;
        return;
    }
    mini = segment[0].first;
    maxi = segment[0].second;
    for (int i = 1; i < n;i++){
        int d1 = abs(segment[i].first - segment[i - 1].first);
        int d2 = abs(segment[i].first - segment[i - 1].second);
        int d3 = abs(segment[i].second - segment[i - 1].first);
        int d4 = abs(segment[i].second - segment[i - 1].second);

        mini = min(mini, min(min(d1, d2), min(d3, d4)));
        maxi = max(maxi, max(max(d1, d2), max(d3, d4)));
    }
    // cout<<mini<<"|"<<maxi<<endl
    int ans = (mini + maxi) / 2;
    while(mini!=maxi){
        ans = (mini + maxi) / 2;
        // cout << maxi << "*" << mini << endl;
        if(isOk(segment,ans)){
            maxi = ans;
        }
        else{
            mini = ans + 1;
        }
    }
    ans = (mini + maxi) / 2;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}