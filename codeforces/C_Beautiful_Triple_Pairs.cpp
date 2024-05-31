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

int count1(vector<vector<int> > &tripltes)
{
    map<vector<int>, int> freq;
    map<vector<int>, int> freq2;

    for (auto it : tripltes)
    {
        freq[it]++;
        freq2[{it[0], it[1]}]++;
    }

    int ans = 0;
    for (auto it : freq)
    {
        vector<int> temp = {it.first[0], it.first[1]};
        int cnt = it.second;
        int tot = freq2[temp];
        ans += cnt * (tot - cnt);
    }

    return ans / 2;
}
int count2(vector<vector<int> > &tripltes)
{
    map<vector<int>, int> freq;
    map<vector<int>, int> freq2;

    for (auto it : tripltes)
    {
        freq[it]++;
        freq2[{it[0], it[2]}]++;
    }

    int ans = 0;
    for (auto it : freq)
    {
        vector<int> temp = {it.first[0], it.first[2]};
        int cnt = it.second;
        int tot = freq2[temp];
        ans += cnt * (tot - cnt);
    }

    return ans / 2;
}
int count3(vector<vector<int> > &tripltes)
{
    map<vector<int>, int> freq;
    map<vector<int>, int> freq2;

    for (auto it : tripltes)
    {
        freq[it]++;
        freq2[{it[1], it[2]}]++;
    }

    int ans = 0;
    for (auto it : freq)
    {
        vector<int> temp = {it.first[1], it.first[2]};
        int cnt = it.second;
        int tot = freq2[temp];
        ans += cnt * (tot - cnt);
    }

    return ans / 2;
}

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> tripltes;
    for (int i = 0; i < n - 2; i++)
    {
        tripltes.push_back({v[i], v[i + 1], v[i + 2]});
    }

    int ans = count1(tripltes) + count2(tripltes) + count3(tripltes);
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