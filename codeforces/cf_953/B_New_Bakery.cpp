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
int helper(int n,int a,int b,int k){
    if(k<0)
        k = 0;
    if(k>min(n,b))
        k = min(n,b);
    int ans = k * b - k * (k + 1) / 2 + k + a * n - a * k;
    return ans;
}

void test_case()
{
    int n, a, b;
    cin >> n >> a >> b;
    int k1 = (b - a);
    int k2 = k1+1;
    // cout << k1 << " " << k2 << endl;
    cout << max(helper(n, a, b, k1), helper(n, a, b, k2)) << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}