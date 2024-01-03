#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;

#ifdef LOCAL
#include "debuglib.h"
#else
#endif

const int INF = 1e8;
const int M = 1e9 + 7;

void test_case()
{
    string ab;
    cin >> ab;
    string a = "";
    string b = "";
    a += ab[0];
    int i = 0;
    for (i = 1; i < ab.length(); i++)
    {
        if (ab[i] != '0')
            break;
        a += ab[i];
    }
    for (; i < ab.length(); i++)
    {
        b += ab[i];
    }
    if (b == "" || stoi(a) >= stoi(b) || stoi(a) == 0 || stoi(b) == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << b << endl;
    }
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}