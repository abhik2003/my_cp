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
    int a, b, c;
    cin >> a >> b >> c;
    a &= 1;
    b &= 1;
    c &= 1;
    if((a+b+c)==3 || (a+b+c)==0){
        cout << "1 1 1" << endl;
    }
    else if((a+b+c)==1){
        if(a){
            cout << "1 0 0" << endl;
        }
        else if(b){
            cout << "0 1 0" << endl;
        }
        else{
            cout << "0 0 1" << endl;
        }
    }
    else{
        if(a==0){
            cout << "1 0 0" << endl;
        }
        else if(b==0){
            cout << "0 1 0" << endl;
        }
        else{
            cout << "0 0 1" << endl;
        }

    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}