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
    int n, k;
    cin >> n >> k;
    vector<int> perm(n);
    for (int i = 0; i < n;i++)
        perm[i] = i + 1;
    if (k & 1)
    {
        cout << "No" << endl;
        return;
        }
    int max_pos = 0;
    int n_ = n / 2;
    int par = n & 1;
    for (int i = 0; i < n_; i++)
    {
        max_pos += (i * 2 + 1 + par);
    }
    max_pos *= 2;
    if(k>max_pos){
        cout << "No" << endl;
        return;
    }
    int l = 0, r = n - 1;
    int k_ = k;
    while (k > 0)
    {
        if(2*(perm[r]-perm[l])<=k){
            k -= 2 * (perm[r] - perm[l]);
            swap(perm[r], perm[l]);
            l++;
            r--;
        }
        else{
            r--;
        }
    }
    cout << "Yes" << endl;
    for (int i : perm)
    {
        cout << i << " ";
    }

    cout << endl;
    // cout << max_pos << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}