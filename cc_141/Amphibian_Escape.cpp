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
    int n, h, k;
    cin >> n >> k >> h;
    int ans = 0;
    for (int i = 1; i <= n;i++){
        int l = 1, r = n;
        int temp = 0;
        if(i>=h){
            ans += n;
            continue;
        }
        while(l<=r){
            int mid = (l + r) / 2;
            int time = 1;
            int ht = h - i;
            if(ht>0){
                if(i<=mid)
                    time += 1e10;
                else
                    time += ((ht + i - mid -1) / (i - mid));
            }

            if (time <= k)
            {
                // cout << i << " " << mid << " " << time << endl;
                temp = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        ans += temp;
        // cout << i << " " << ans << endl;
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}