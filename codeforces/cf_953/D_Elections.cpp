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

void test_case()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    a[0] += c;
    int winner = 0;
    int w_vote = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>w_vote){
            winner = i;
            w_vote = a[i];
        }
    }

    vector<int> ans(n, -1);
    ans[winner] = 0;

    if(winner==0){
        for (int i = 1; i < n;i++){
            ans[i] = i;
        }
    }
    else{
        ans[0] = 1;
        int x;
        if (ans[1] != 0)
        {
            if(w_vote<= a[0]+a[1]){
                ans[1] = 1;
                x = 1;
            }
            else{
                ans[1] = 2;
                x = 2;
                // cout << w_vote<<'h';
            }
        }
        else{
            x = 1;
        }
        int pref = a[0] + a[1];
        for (int i = 2; i < n; i++)
        {
            x++;
            if(ans[i]==0){
                x = i;
                continue;
            }
            if(pref+a[i]>=w_vote){
                ans[i] = i;
                x = i;
            }
            else{
                ans[i] = x;
            }
            pref += a[i];
        }
    }
    for(int a : ans)
        cout << a << " ";
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}