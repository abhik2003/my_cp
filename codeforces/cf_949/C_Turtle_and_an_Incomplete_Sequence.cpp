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
const int M = 1e9;

bool checker(vector<int> &v, int l, int r)
{
    for (int i = l; i < r; i++)
    {
        if (v[i] == v[i + 1] / 2 || v[i] / 2 == v[i + 1])
        {
            continue;
        }
        return false;
    }
    return true;
}
bool make_it(vector<int> &v, int l, int r)
{
    if ((l + 1) == r)
    {
        if (v[l] / 2 == v[r] || v[r] / 2 == v[l])
            return true;
        else
            return false;
    }
    int i = l + 1;
    int j = r - 1;
    if (v[l] > v[r])
    {
        while (i < r && v[i - 1] != 1)
        {
            v[i] = v[i - 1] / 2;
            i++;
        }
        while (j >= i && v[j + 1] != 1)
        {
            v[j] = v[j + 1] / 2;
            j--;
        }
        while (i <= j)
        {
            v[i] = v[i - 1] * 2;
            if (v[i] > M)
                v[i] = v[i - 1] / 2;
            v[j] = v[j + 1] * 2;
            if (v[j] > M)
                v[j] = v[j + 1] / 2;
            i++;
            j--;
        }
    }
    else
    {
        while (j > l && v[j + 1] != 1)
        {
            v[j] = v[j + 1] / 2;
            j--;
        }
        while (i <= j && v[i - 1] != 1)
        {
            v[i] = v[i - 1] / 2;
            i++;
        }
        while (i <= j)
        {
            v[i] = v[i - 1] * 2;
            if (v[i] > M)
                v[i] = v[i - 1] / 2;
            v[j] = v[j + 1] * 2;
            if (v[j] > M)
                v[j] = v[j + 1] / 2;
            i++;
            j--;
        }
    }

    return checker(v, l, r);
}

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != -1)
        {
            if (last != -1)
            {
                bool temp = make_it(v, last, i);
                if (!temp)
                {
                    cout << -1 << endl;
                    return;
                }
            }
            last = i;
        }
    }

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != -1)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                v[j] = v[j + 1] * 2;
                if (v[j] > M)
                    v[j] = v[j + 1] / 2;
            }
            break;
        }
    }
    if (last == -1)
    {
        v[0] = 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                v[j] = v[j - 1] * 2;
                if (v[j] > M)
                    v[j] = v[j - 1] / 2;
            }
            break;
        }
    }

    if (!checker(v, 0, n - 1))
    {
        cout << -1 << endl;
        return;
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}