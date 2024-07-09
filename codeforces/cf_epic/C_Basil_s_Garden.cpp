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

    int ans = 0;
    for (int i = n - 1; i >= 0;i--){
        if(i==n-1){
            ans = v[i];
        }
        else{
            v[i] = max(v[i], v[i + 1] + 1);
            ans = max(v[i], ans);
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