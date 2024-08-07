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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "L" + s + "L";
    // cout << s << endl;
    int cur = 0;
    n++;

    while(cur<n){
        if(s[cur]=='C'){
            cout << "NO" << endl;
            return;
        }
        if(s[cur]=='W'){
            cur++;
            k--;
            if(k<0){
                cout << "NO" << endl;
                return;
            }
            continue;
        }
        int water = -1;
        bool jump = false;
        for (int i = 1; i <= m; i++)
        {
            int next = cur + i;
            if(s[next]=='L'){
                cur = next;
                jump = true;
                break;
            }
            if(s[next]=='W'){
                water = next;
            }
        }

        if(!jump){
            //jump is not possible
            if(water==-1){
                //no water is also possible
                cout << "NO" << endl;
                return;
            }
            else{
                //jump to water
                cur = water;
            }
        }
    }

    cout << "YES" << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}