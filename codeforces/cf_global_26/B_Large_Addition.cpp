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
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    if(s[0]>'8'){
        cout << "NO" << endl;
        return;
    }
    else if(s.back()!='1'){
        cout << "NO" << endl;
        return;
    }
    else{
        for (int i = 1; i < (int)s.length() - 1;i++){
            if(s[i]=='0'){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}