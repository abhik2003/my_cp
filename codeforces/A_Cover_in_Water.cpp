#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 
#ifdef LOCAL
#include "debuglib.h"
#else
#endif
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int streak=0;
    if(s[0]=='.')
        streak++;
    int max_streak = streak;
    int empty = streak;
    for (int i = 1; i < n;i++){
        if(s[i]=='.'){
            streak++;
            max_streak = max(streak, max_streak);
            empty++;
        }
        else{
            streak = 0;
        }
    }
    if(max_streak>2){
        cout << "2" << endl;
    }
    else{
        cout << empty << endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}