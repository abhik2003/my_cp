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
    int x=1;
    int y=1;
    vector<int> v(n);
    int i = 0;

    while (1)
    {
        for (int j = 0; j < x;j++){
            v[i] = y;
            i++;
            if(i==n){
                cout << y << endl;
                for(int x : v)
                    cout << x << " ";
                cout << endl;
                return;
            }
        }
        x *= 2;
        y++;
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}