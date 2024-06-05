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
    int n, m;
    cin >> n >> m;
    int ans = n;
    int l = max(0ll, n - m);
    int r = n + m;

    for (int i = 0; i < 32;i++){
        if(l&(1ll<<i) || r&(1ll<<i)){
            ans |= (1ll << i);
        }
        else{
            int w = (1ll << i);
            if((r-l+1)>w){
                ans |= (1ll << i);
            }
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