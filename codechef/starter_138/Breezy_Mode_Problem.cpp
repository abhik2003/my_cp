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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    map<int, int> aux;
    vector<int> freq(n+1);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int max_freq = *max_element(freq.begin(), freq.end());

    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        if(freq[i])
            aux[freq[i]]++;
    }
    for(auto it: aux)
        x += it.second;
    // cout << x << endl;

    int pre = 0;
    for (int i = 1; i <= max_freq;i++){
        if(aux[i]==0){
            ans += (x - pre)*i;
            // cout << i << pre<<endl;
        }
        else{
            ans += (x - pre)*i;
            pre += aux[i];
        }
        // cout << i << " "<<ans << endl;
    }
        // for(auto it : freq){
        //     aux[it.second]++;
        // }
    // cout << ans << endl;
    while (q--)
    {
        int p, x;
        cin >> p >> x;
        p--;
        // for(auto i:v)
            //cout << i << " ";
        int old = v[p];
        ans -= freq[old];
        freq[old]--;
        //cout << ans << old << endl;

        freq[x]++;
        ans += freq[x];
        cout << ans << endl;
        v[p] = x;
    }
}

int32_t main(){
    fastio;
    int t=1;
    // cin >> t;
    while(t--)
        test_case();
}