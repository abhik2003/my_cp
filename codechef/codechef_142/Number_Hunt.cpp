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

bool isPrime(int n){
    for (int i = 2; i * i <= n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
void test_case()
{
    int n;
    cin >> n;
    if(n==1){
        cout << 6 << endl;
        return;
    }
    if(isPrime(n)){
        for (int i = n + 1;;i++){
            if(isPrime(i)){
                cout << n * i << endl;
                return;
            }
        }
    }
    else{
        cout << n << endl;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}