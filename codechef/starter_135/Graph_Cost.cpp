#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cassert>
#include <bitset>
#include <fstream>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
using namespace std;
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];

    vector<int> right_min(n),left_min(n);
    right_min[n - 1] = INT_MAX;
    for (int i = n - 2; i >= 0;i--){
        right_min[i] = min(right_min[i + 1], v[i + 1]);
    }

    left_min[0] = INT_MAX;
    for (int i = 1; i < n;i++){
        left_min[i] = min(left_min[i - 1], v[i - 1]);
    }
    if(n==1){
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    int j = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if(left_min[i]<v[i] && right_min[i]<v[i]){
            ans += max(left_min[i], right_min[i]);
        }
        else if (left_min[i] < v[i])
        {
            ans += v[i];
        }
        else{
            ans += left_min[i];
        }
        // cout << ans << "-"<<endl;
    }
    ans += max(left_min[n - 1], v[n - 1]);
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}