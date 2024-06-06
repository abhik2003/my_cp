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
    int x, y;
    cin >> x >> y;
    int k = x ^ y;
    vector<int> v(32);
    for (int i = 0; i < 32; i++)
    {
        if((1<<i) & k){
            v[i] = 1;
        }
    }

    // while(v.back()==0)
        // v.pop_back();

    int ans = 0;
    int streak = 0;
    for (int i = 0; i < v.size();i++){
        if(v[i]==0){
            streak++;
            ans = max(ans, streak);
        }
        else{
            streak = 0;
            break;
        }
        // cout << v[i];
    }
    // cout << endl;
    cout << (1 << ans) << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}