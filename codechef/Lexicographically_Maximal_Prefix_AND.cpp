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
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = n - 1;
    for (i = n - 1; i >= 0;i--){
        int cur = v[i];
        cout << v[i] <<" ";
        v.pop_back();
        while (i>0 && v[i-1]==cur)
        {
            cout << cur << " ";
            v.pop_back();
            i--;
        }

        for (int j = 0; j < i;j++){
            v[j] &= cur;
        }
        sort(v.begin(), v.end());
        if(v.back()==0 || v[0]==cur){
            i--;
            break;
        }
    }
    for (int j = i; j >= 0;j--){
        cout << v[j] <<" ";
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