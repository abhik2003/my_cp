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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n==1){
        cout << 0 << endl;
        return;
    }
    vector<int> zero_suf(n+1,0), one_pref(n+1,0);
    vector<vector<int>> inv(n, vector<int>(n));

    for (int i = n - 1; i >= 0;i--){
        zero_suf[i] = zero_suf[i+1];
        if (s[i] == '0')
        {
            zero_suf[i]++;
        }
        
    }
    // for(int x: zero_suf)
    //     cout << x << " ";
    // cout << endl;

    for (int i = 0; i <= n - 1;i++){
        one_pref[i + 1] = one_pref[i];
        if(s[i]=='1'){
            one_pref[i + 1]++;
        }
    }

    // for(int x: one_pref)
    //     cout << x << " ";
    // cout << endl;

    int l = 0, r = n-1;
    int one = 0, zero = 0;

    for (int i = 0; i < n;i++){
        int ans = 0;
        int one = 0;
        for (int j = i; j < n; j++)
        {
            if(s[j]=='1')
                one++;
            else
                ans += one;
            inv[i][j] = ans;
        }
    }

    int ans = n * n;
    for (int i = -1; i < n;i++){
        for (int j = i + 1; j <= n;j++){
            //0-i ==0
            //j-n-1 ==1
            int one_left = one_pref[i + 1];
            int zero_right = zero_suf[j];
            // cout << i << " " << j << endl;
            // cout << "++"<<(one_left + zero_right) << endl;
            if ((one_left + zero_right) <= k)
            {
                if(i+1>=(j-1))
                    ans = 0;
                else
                    // cout << i + 1 << " " << j - 1 << "---" << endl;
                ans = min(ans, inv[i + 1][j - 1]);
                // cout << i << " " << j << endl;
            }
        }
    }
        // cout << s << endl;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}