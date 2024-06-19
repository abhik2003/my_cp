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
    int n, c;
    cin >> n >> c;

    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    if(n==1){
        cout << 1 << endl;
        return;
    }
    multiset<int> ms;
    int sum = 0;
    for (int x : v)
    {
        ms.insert(x);
        sum += x;
    }

    int dest = 0;

    int tem = v[0];
    int req = tem * (sum - tem);
    if(c>=req){
        cout << 1 << endl;
        return;
    }
    int tot = 0;
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            tot += v[i] * v[j];
        }
    }
    sort(v.begin(), v.end());
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int left = 0;
        for (int j = 0; j < i;j++){
            for (int k = j + 1; k < i;k++){
                left += v[j] * v[k];
            }
        }

        int right = 0;
        for (int j = i; j < n; j++){
            for (int k = j + 1; k < n;k++){
                right += v[j] * v[k];
            }
        }
        int req = tot - left - right;
        if(req<=c){
            multiset<int> ls, rs;
            for (int j = 0; j < i;j++){
                ls.insert(v[j]);
            }
            for (int j = i; j < n;j++){
                rs.insert(v[j]);
            }

            if(ls.count(tem)){
                ans = min(ans, (int)ls.size());
            }
            if(rs.count(tem)){
                ans = min(ans, (int)rs.size());
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