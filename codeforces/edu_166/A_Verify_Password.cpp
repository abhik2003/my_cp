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


bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
}
bool isLetter(char ch){
    return ch >= 'a' && ch <= 'z';
}
void test_case()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n-1; i++){
        if(isDigit(s[i+1]) && isLetter(s[i])){
            cout << "NO\n";
            return;
        }
        if(isDigit(s[i+1]) && isDigit(s[i]) && s[i+1]<s[i]){
            cout << "NO\n";
            return;
        }
        if(isLetter(s[i+1]) && isLetter(s[i]) && s[i+1]<s[i]){
            cout << "NO\n";
            return;
        }

    }
    cout << "YES\n";
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}