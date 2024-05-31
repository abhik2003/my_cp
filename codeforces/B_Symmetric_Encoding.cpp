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

void test_case()
{
    string s;
    set<char> set_;
    int n;
    cin >> n;
    cin >> s;
    for (char ch : s)
        set_.insert(ch);
    vector<char> r;
    for (char ch : set_)
        r.push_back(ch);
    sort(r.begin(), r.end());
    map<char, char> mp;
    int rn = r.size();
    for (int i = 0; i < r.size(); i++)
    {
        mp[r[i]] = r[rn - 1 - i];
    }
    string ans = "";
    for (char ch : s)
        ans += mp[ch];
    cout << ans << endl;
    // cout << s << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        test_case();
}