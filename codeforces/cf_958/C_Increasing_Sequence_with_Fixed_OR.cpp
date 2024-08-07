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

vector<int> helper(vector<int>& setbit){
    if(setbit.size()==1){
        return {1ll << setbit[0]};
    }
    else if(setbit.size()==2){
        int n1 = (1ll << setbit[0]) + (1ll << setbit[1]);
        int n2 = (1ll << setbit[1]);
        int n3 = (1ll << setbit[0]);

        return {n1, n2, n3};
    }
    int maxbit = setbit.back();
    setbit.pop_back();
    vector<int> ans,temp;
    ans = helper(setbit);
    for (int i = 0; i < ans.size();i++)
    {
        ans[i] |= (1ll << maxbit);
    }

    int last = ans.back();
    int new_added = 0;
    for (int i = 0; i < maxbit; i++)
    {
        if(last&(1ll<<i)){
            continue;
        }
        else{
            new_added |= (1ll << i);
        }
    }
    ans.push_back(new_added);

    return ans;
}

void test_case()
{
    int n;
    cin >> n;
    vector<int> ans, setbit;
    ans.push_back(n);
    for (int i = 0; i < 63;i++){
        if((1ll<<i)&n){
            setbit.push_back(i);
        }
    }

    ans = helper(setbit);
    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int x : ans){
        cout << (x&n) << " ";

    }
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while (t--)
        test_case();
}