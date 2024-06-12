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

    int n_ = sqrt(n + 1);
    n_ += 2;
    vector<bool> p(n_ + 1, true);
    p[0] = p[1] = false;
    for (int i = 2; i <= n_; i++)
    {
        if (p[i] && i * i <= n_)
        {
            for (int j = i * i; j <= n_; j += i)
                p[j] = false;
        }
    }

    vector<int> prime;
    for (int i = 0; i <= n_;i++){
        if(p[i])
            prime.push_back(i);
    }

    bool flag = false;
    for (int ai = 0; ai <= n_; ai++)
    {
        int a = prime[ai];
        int c_2;

        for (int bi = ai+1; bi <= n_;bi++){
            int b = prime[bi];

            c_2 = n - a * a - b * b;
            if(c_2>1){
                int c = sqrt(c_2 + 1);
                if(c*c==c_2 && p[c] && c>b){
                    cout << "YES" << endl;
                    return;
                }
            }
            else{
                break;
            }
        }
        
    }
    cout << "NO" << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}