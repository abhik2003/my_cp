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

int sod(int n){
    if(n<10)return n;
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return sod(ans);
}
int helper(int n){
    if(n<10)return n*(n+1)/2;

    int ans;
    int full=n/10;
    ans = full*45;
    ans += helper(full);
    int rem=n%10;
    for(int i=n;i>n-rem;i--){
        ans += sod(i);
    }
    return ans;
}
void test_case()
{
    int n;
    cin>>n;
    int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans+=sod(i);
    // }
    // cout<<ans<<endl;
    cout<<helper(n)<<endl;

}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}