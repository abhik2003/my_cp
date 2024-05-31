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
// #define int long long
using namespace std;

const int INF = 1e8;
const int M = 1e9 + 7;

void test_case()
{
    int x, y;
    cin >> x >> y;
    int ans;
    ans = (y + 1) / 2;
    x -= 5 * 3 * ans - 4 * y;
    if (x > 0)
    {
        ans += (x + 14) / 15;
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}