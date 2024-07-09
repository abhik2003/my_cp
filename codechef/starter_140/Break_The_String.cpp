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

#define DEBUG(x...)                          \
    {                                        \
        cout << "(" << #x << ")" << " = ( "; \
        Print(x);                            \
    }
template <typename T1>
void Print(T1 t1) { cout << t1 << " )" << endl; }
template <typename T1, typename... T2>
void Print(T1 t1, T2... t2)
{
    cout << t1 << " , ";
    Print(t2...);
}
const int INF = 1e8;
const int M = 1e9 + 7;

vector<int> compute_hash(string const &s)
{
    int p = 53;
    int m = 1e9 + 9;
    int hash_value = 0;
    int p_pow = 1;
    vector<int> ans;
    for (char c : s)
    {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
        ans.push_back(hash_value);
    }
    return ans;
}

void test_case()
{
    int m = 1e9 + 9;
    string s;
    cin >> s;
    if (s.length() & 1)
    {
        cout << 0 << endl;
        return;
    }
    int n = s.length();
    int p = 53;
    vector<int> pi(n + 1);
    pi[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        pi[i] = p;
        // cout<<pi[i]<<" ";
        p *= 53;
        p %= m;
    }
    vector<int> hash = compute_hash(s);
    // for(int x: hash)
    //     cout << x << " ";
    // cout << endl;
    int ans = 0;
    for (int i = 0; i <= n; i += 2)
    {
        int l1 = i / 2;
        int l2 = (n - i) / 2;

        int h1 = (l1 == 0) ? 0 : (pi[l1] * hash[l1 - 1]) % m;      // 0,l1-1 i=0
        int h2 = (l1 == 0) ? 0 : (hash[i - 1] - hash[l1 - 1]) % m; // l1,i-1 j=l1

        int h3 = (l2 == 0) ? 0 : ((hash[i + l2 - 1] - ((i==0)? 0 :hash[i - 1])) % m);
        // cout << (hash[i + l2 - 1] - hash[i - 1])  <<"|"<<h3 << endl;
        h3 = (h3 * pi[l2]) % m;
        int h4 = (l2 == 0) ? 0 : (hash[n - 1] - hash[i + l2 - 1]) % m;
        h1 = (h1 + m) % m;
        h2 = (h2 + m) % m;
        h3 = (h3 + m) % m;
        h4 = (h4 + m) % m;
        if (h1 == h2 && h3 == h4)
            ans++;
        // cout << ans << endl;
        // DEBUG(h1, h2, h3, h4, ans);
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