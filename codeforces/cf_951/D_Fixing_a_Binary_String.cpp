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

string build(int n, int k, bool f){
    string ans = "";
    for (int i = 0; i < n;i++){
        if((i/k)&1){
            ans += f ? '1' : '0';
        }
        else{
            ans += f ? '0' : '1';
        }
    }
    return ans;
}
int isPossible(string& s,int k,int n){
    string one = build(n, k, 1);
    string two = build(n, k, 0);
    int streak = 0;
    int last = s[0];
    int ind = -1;
    vector<pair<int, int>> grp,grp2;
    for (int i = 0; i < s.length(); i++)
    {
        if(last==s[i]){
            streak++;
        }
        else{
            grp.push_back({streak, last - '0'});
            streak = 1;
            last = s[i];
        }
    }
    grp.push_back({streak, last - '0'});
    bool flg = 0;
    // int ind = -1;
    int p = 0;
    for (auto it : grp)
    {
        
        int cnt = it.first;
        int ch = it.second;
        if(flg || cnt<=k){
            grp2.push_back(it);
        }
        else{
            grp2.push_back({cnt - k, ch});
            grp2.push_back({k, ch});
            flg = 1;
            ind = p + cnt -k;
        }
        p += cnt;
    }
    if(ind==-1){
        int p = 0;
        ind = -1;
        for (auto it : grp2)
        {
            int cnt = it.first;
            int ch = it.second;

            if(cnt<k){
                ind = p + cnt;
                break;
            }
            p += cnt;
        }
        string ns = s.substr(0, ind);
        string suf = s.substr(ind, n - ind);
        reverse(ns.begin(), ns.end());
        ns = suf + ns;
        // cout << ns << endl;
        // cout << suf << endl;
        if (ns == one || ns == two)
        {
            return ind;
        }
        else{
            return -1;
        }
    }
    else{
        string ns = s.substr(0, ind);
        string suf = s.substr(ind, n - ind);
        reverse(ns.begin(), ns.end());
        ns = suf + ns;
        if (ns == one || ns == two)
        {
            return ind;
        }
        else
        {
            return -1;
        }
    }
}

void test_case()
{
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    string x = "";
    string one = build(n, k, 1);
    string two = build(n, k, 0);
    if(s==one || s==two){
        cout << n << endl;
        return;
    }
    cout << isPossible(s, k, n) << endl;
    // cout << one << endl;
    // cout << two << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}