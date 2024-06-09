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
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long

using namespace std;

const int INF = 1e8;
const int M = 1e9 + 7;
const int mod = 998244353;

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n), mini(n), maxi(n), maxi_cnt(n), mini_cnt(n);

    int op1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        op1 += v[i];
    }
    mini[0] = v[0];
    maxi[0] = abs(v[0]);
    mini_cnt[0] = 1;
    maxi_cnt[0] = 1;
    if (maxi[0] == v[0])
    {
        maxi_cnt[0] = 2;
    }
    if(mini[0]>=0){
        mini_cnt[0] = 2;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] > 0)
        {
            maxi[i] = maxi[i - 1] + v[i];
            maxi_cnt[i] = maxi_cnt[i - 1] * 2;

            mini[i] = mini[i - 1] + v[i];
            mini_cnt[i] = (mini[i] < 0) ? 1 : 2;
            mini_cnt[i] *= mini_cnt[i - 1];
        }
        else
        {
            mini[i] = mini[i - 1] + v[i];
            mini_cnt[i] = (mini[i] < 0) ? 1 : 2;
            mini_cnt[i] *= mini_cnt[i - 1];

            maxi[i] = max(maxi[i - 1] + v[i], abs(mini[i - 1] + v[i]));
            if ((maxi[i - 1] + v[i]) > abs(mini[i - 1] + v[i]))
            {
                maxi_cnt[i] = 2 * maxi_cnt[i - 1];
            }
            else if ((maxi[i - 1] + v[i]) < abs(mini[i - 1] + v[i]))
            {
                maxi_cnt[i] = mini_cnt[i - 1];
            }
            else
            {
                if (maxi[i - 1] == mini[i - 1]){
                    maxi_cnt[i] = 2 * maxi_cnt[i - 1];
                }
                else{
                    maxi_cnt[i] = 2 * maxi_cnt[i - 1] + mini_cnt[i - 1];
                }
            }
        }
        maxi_cnt[i] %= mod;
        mini_cnt[i] %= mod;
        // cout << maxi_cnt[i] << " " << mini_cnt[i] << endl;
    }

    cout << maxi_cnt[n - 1] << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}