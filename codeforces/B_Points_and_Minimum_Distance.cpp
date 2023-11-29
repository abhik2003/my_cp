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
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = a[2 * n - 1] - a[n] + (a[n-1] - a[0]);
    cout << sum << endl;
    for (int i = 0; i < n;i++){
        cout << a[i] << " " << a[i + n]<<endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}