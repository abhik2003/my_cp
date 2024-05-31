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
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n+1;i++){
        cin >> b[i];
    }
    int ans = 0;
    bool flag = 0;
    int last = b.back();
    for (int i = 0; i < n; i++)
    {
        ans+=abs(a[i] - b[i]);
        if(last>=a[i] && last<=b[i])
            flag = true;
        if(last>=b[i] && last<=a[i])
            flag = true;
    }

    if(flag){
        ans++;
        cout << ans << endl;
        return;
    }

    int mini = 1e12;
    for (int i = 0; i < n;i++){
        mini = min(mini, abs(a[i] - last));
        mini = min(mini, abs(b[i] - last));
    }
    ans += mini + 1;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}