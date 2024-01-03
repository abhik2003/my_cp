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
    int n;
    cin >> n;
    vector<int> v(n), pre(n);
    vector<int> temp(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        temp[i] = v[i];
    }
    sort(v.begin(), v.end());
    sort(temp.begin(), temp.end());

    vector<bool> curse(n, false);
    int cursed = 0;
    temp.push_back(v[0]);
    int pref = temp[0];
    int r = n - 1;
    int l = 1;
    for (int i = 1; i < n;i++){
        if(pref>=temp[i]){
            v[r--] = temp[i];
        }
        else{
            v[l] = temp[i];
            pref += v[l];
            l++;
        }
    }
    
    for (int i = 1; i < n;i++){
        pre[i] = pre[i - 1] + v[i - 1];
        if(pre[i]>=v[i]){
            cursed++;
        }
    }
    cout << cursed << endl;
    for(auto x:v)
        cout << x << " ";
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}