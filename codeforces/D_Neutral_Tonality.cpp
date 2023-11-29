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


vector<int> LIS(vector<int>& arr)
{
 
    int n = arr.size();
    vector<int> ans;
 
    ans.push_back(arr[0]);
 
    for (int i = 1; i < n; i++) {
        if (arr[i] > ans.back()) {
 
            ans.push_back(arr[i]);
        }
        else {
 
            int low = lower_bound(ans.begin(), ans.end(), arr[i])- ans.begin();
 
            ans[low] = arr[i];
        }
    }

    return {ans[0], ans[ans.size() - 1]};
}

void test_case()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < m;i++){
        cin >> b[i];
    }
    sort(b.begin(), b.end(), greater<int>());
    int i = 0;
    vector<int> lis = LIS(a);

    while(i<m && b[i]>lis[0]){
        cout << b[i] << " ";
        i++;
    }
    // cout << endl;
    for(auto & x:a)
        cout << x << " ";
    while(i<m){
        cout << b[i] << " ";
            i++;
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