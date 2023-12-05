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
    string s;
    cin >> s;
    vector<int> lower, upper;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='b'){
            if(lower.size()){
                lower.pop_back();
            }
        }
        else if(s[i]=='B'){
            if(upper.size()){
                upper.pop_back();
            }
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower.push_back(i);
        }
        else{
            upper.push_back(i);
        }
    }

    int i = 0, j = 0, l=lower.size(), u=upper.size();
    while(i<l && j<u){
        if(lower[i]<upper[j]){
            cout << s[lower[i++]];
        }
        else{
            cout << s[upper[j++]];
        }
    }
    while(i<l){
        cout << s[lower[i++]];
    }
    while(j<u){
        cout << s[upper[j++]];
    }
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}