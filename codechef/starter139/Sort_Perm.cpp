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

bool isFeasible(vector<int> p, int x){
    int n = p.size();
    for (int i = 1; i < n;i++){
        if(p[i]<p[i-1]){
            p[i] += x;
            if(p[i]<p[i-1])
                return false;
        }
    }

    return true;
}
void test_case()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int lower = 0;
    for (int i = 1; i < n;i++){
        if(p[i]<p[i-1]){
            lower = max(p[i - 1] - p[i], lower);
        }
    }
    if(lower==0){
        //sorted
        int ans = n * (n + 1) / 2;
        cout << ans << endl;
        return;
    }
    int upper = n;
    int left = lower;
    int right = left-1;
    int c = 5;
    while (lower<=upper)
    {
        int mid = (lower + upper) / 2;
        if(isFeasible(p, mid)){
            lower = mid + 1;
            right = mid;
        }
        else{
            upper = mid - 1;
        }
    }
    // cout << left << " " << right << endl;
    left--;
    int ans = right * (right + 1) / 2 - left * (left + 1) / 2;
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}