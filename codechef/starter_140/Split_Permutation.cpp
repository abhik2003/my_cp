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
    if(n&1){//odd
        cout << n << " ";
        for (int i = 1; i <= n / 2;i++){
            cout << n - i << " " << i << " ";
        }
        cout << endl;
    }
    else{
        //even
        for (int i = 1; i <= n / 2;i++){
            cout << i << " " << n + 1 - i << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}