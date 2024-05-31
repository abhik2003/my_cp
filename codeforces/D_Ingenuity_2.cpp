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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int N = 0, S = 0, W = 0, E = 0;
    for(char ch : s){
        if(ch=='N')
            N++;
        if(ch=='S')
            S++;
        if(ch=='E')
            E++;
        if(ch=='W')
            W++;

    }

    if((N+S)&1 || (E+W)&1){
        cout << "NO" << endl;
        return;
    }
    int n1 = 0, n2 = 0, s1 = 0, s2 = 0, w1 = 0, w2 = 0, e1 = 0, e2 = 0;
    if(N&1){
        n1++;
        s1++;
        N--;
        S--;
    }
    if(W&1){
        w2++;
        e2++;
        W--;
        E--;
    }
    while(N){
        n1++;
        n2++;
        N -= 2;
    }
    while(S){
        s1++;
        s2++;
        S -= 2;
    }
    while(W){
        w1++;
        w2++;
        W -= 2;
    }
    while(E){
        e1++;
        e2++;
        E -= 2;
    }
    if ((n2 + s2 + w2 + e2) == 0 || (n1 + s1 + w1 + e1) == 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (char ch : s)
    {
        if (ch == 'N'){
            if(n1){
                cout << "R";
                n1--;
            }
            else{
                cout << "H";
                n2--;
            }
        }
        if (ch == 'S'){
            if(s1){
                cout << "R";
                s1--;
            }
            else{
                cout << "H";
                s2--;
            }
        }
        if (ch == 'E'){
            if(e1){
                cout << "R";
                e1--;
            }
            else{
                cout << "H";
                e2--;
            }
        }
        if (ch == 'W'){
            if(w1){
                cout << "R";
                w1--;
            }
            else{
                cout << "H";
                w2--;
            }
        }
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