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
#define DEBUG(x...) { cout << "(" << #x << ")" << " = ( "; Print(x); }
template <typename T1> void Print(T1 t1) { cout << t1 << " )" << endl; }
template <typename T1, typename... T2>
void Print(T1 t1, T2... t2) { cout << t1 << " , "; Print(t2...); }
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    string a, b;
    cin >> a;
    cin >> b;

    int na = a.length();
    int nb = b.length();

    int maxi = 0; //

    for (int i = 0; i < nb;i++){
        int k = 0;
        for (int j = i; j < nb;){
            if(a[k]==b[j]){
                int len = j - i + 1;
                // DEBUG(i, j, len);
                maxi = max(maxi, len);
                k++;
                j++;
            }
            else{
                k++;
            }
            if(k==na)break;
        }
    }
    int ans = na + nb - maxi;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}