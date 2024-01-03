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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sub_seq = "";
    string s_ = s;
    sort(s_.begin(), s_.end());
    char last = 'a';
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= last)
        {
            sub_seq += s[i];
            last = s[i];
        }
        else
        {
            if (s[i] != s_[i])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    int r = sub_seq.length();
    int i;
    for (i = r - 2; i >= 0; i--)
    {
        if (sub_seq[i] != sub_seq[i + 1])
            break;
    }

    cout << i + 1 << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}