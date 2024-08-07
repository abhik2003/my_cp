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

int solve1(string &s)
{
    int k = 0, ck = 0, ack = 0, back = 0;
    set<int> del_ind;
    queue<vector<int>> bi, ai, ci, ki;
    reverse(s.begin(), s.end());
    int ans = s.length();
    int reserve = 0;
    int n = s.length();
    for (int i = 0;; i++)
    {
        if (i == n)
        {
            if (reserve == 0)
                break;

            reserve--;

            if (ack)
            {
                ack--;
                ans -= 3;
                n++;
                reserve++;
            }
            else if (ck)
            {
                ck--;
                ack++;
                n++;
            }
            else if (k)
            {
                k--;
                ck++;
                n++;
            }
            else
            {
                k++;
                n++;
            }
            continue;
        }
        if (s[i] == 'k')
        {
            k++;
            ki.push({i});
        }
        else if (s[i] == 'c')
        {
            if (k)
            {
                k--;
                ck++;
            }
        }
        else if (s[i] == 'a')
        {
            if (ck)
            {
                ck--;
                ack++;
            }
        }
        else
        {
            if (ack)
            {
                // matched
                ack--;
                ans -= 3;
                reserve++;
            }
        }
    }
    return ans;
}
int solve2(string &s)
{
    int f = 0, fr = 0, fro = 0, fron = 0, front = 0;
    int ans = s.length();
    int reserve = 0;
    int n = s.length();
    for (int i = 0;; i++)
    {
        if (i == n)
        {
            if (reserve == 0)
                break;
            reserve--;
            if(fron){
                ans -= 4;
                fron--;
                reserve++;
            }
            else if(fro){
                fro--;
                fron++;
            }
            else if(fr){
                fr--;
                fro++;
            }
            else if(f){
                f--;
                fr++;
            }
            else{
                f++;
            }
            n++;
            continue;
        }
        if(s[i]=='f'){
            f++;
        }
        else if(s[i]=='r'){
            if(f){
                f--;
                fr++;
            }
        }
        else if(s[i]=='o'){
            if(fr){
                fr--;
                fro++;
            }
        }
        else if(s[i]=='n'){
            if(fro){
                fro--;
                fron++;
            }
        }
        else{
            if(fron){
                fron--;
                ans -= 4;
                reserve++;
            }
        }
    }

    return ans;
}
void test_case()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int no_use = 0;
    set<char> back = {'b', 'a', 'c', 'k'};
    set<char> front = {'f', 'r', 'o', 'n', 't'};
    string b = "", f = "";
    for (char ch : s)
    {
        if (back.count(ch))
        {
            b += ch;
        }
        else if (front.count(ch))
        {
            f += ch;
        }
        else
        {
            no_use++;
        }
    }

    int ans = no_use;
    ans += solve1(b);
    ans += solve2(f);

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