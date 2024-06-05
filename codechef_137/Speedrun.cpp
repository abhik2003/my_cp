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

int canWin(vector<int> &a, vector<int> &b, int ind, int k)
{
    int x = a[ind]+k;
    int n = a.size();
    vector<int> aux, h, index_;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x - k || a[i] > x + k)
        {
            aux.push_back(a[i]);
            h.push_back(b[i]);
            index_.push_back(i);
        }
    }
    // cout << x;
    int pre = 0;
    for (int i = 0; i < aux.size(); i++)
    {
        pre += h[i];
        if (pre > aux[i])
        {
            return index_[i];
        }
    }
    return -1;
}

void test_case()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int pre = 0;
    int x = -1;
    for (int i = 0; i < n; i++)
    {
        pre += b[i];
        if (pre > a[i])
        {
            x = i;
            break;
        }
    }
    if (x == -1)
    {
        cout << "YES\n";
        return;
    }

    int l = 0, r = x;
    for (int j = x; j >= 0; j--)
    {
        int res = canWin(a, b, j, k);
        if (res == -1)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}