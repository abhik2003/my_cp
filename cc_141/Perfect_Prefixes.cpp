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

int maxSumSubarry(vector<int>& v){
    int maxsum = 0;
    int sum = INT_MIN;
    for(int x:v){
        sum = max(x, sum + x);
        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

void test_case()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int pre = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        pre += v[i];
        if(pre==(((i+1)*(i+2))/2))
            cnt++;
    }
    pre = 0;
    vector<int> pref(n);
    vector<int> aux;
    for (int i = 0; i < n-1; i+=2)
    {
        int temp = pre + v[i];
        int s1 = ((i + 1) * (i + 2)) / 2;
        int s2 = s1 + i + 2;
        if (temp == s1)
        {
            aux.push_back(-1);
        }
        else{
            if(s2==(temp+v[i+1])){
                if(s1==temp-v[i]+v[i+1]){
                    aux.push_back(1);
                }
                else{
                    aux.push_back(0);
                }
            }
            else{
                if(temp-v[i]+v[i+1]==s1)
                    aux.push_back(1);
                else
                    aux.push_back(0);
            }
        }
        pre += v[i] + v[i + 1];
    }
    int ans1 = cnt + maxSumSubarry(aux);

    vector<int> aux2;
    pre = v[0];
    for (int i = 1; i < n - 1; i += 2)
    {
        int temp = pre + v[i];
        int s1 = ((i + 1) * (i + 2)) / 2;
        int s2 = s1 + i + 2;
        if (temp == s1)
        {
            aux2.push_back(-1);
        }
        else
        {
            if (s2 == (temp + v[i + 1]))
            {
                if (s1 == temp - v[i] + v[i + 1])
                {
                    aux2.push_back(1);
                }
                else
                {
                    aux2.push_back(0);
                }
            }
            else
            {
                if (temp - v[i] + v[i + 1] == s1)
                    aux2.push_back(1);
                else
                    aux2.push_back(0);
            }
        }
        pre += v[i] + v[i + 1];
    }
    int ans2 = cnt + maxSumSubarry(aux2);
    // cout << -cnt << endl;
    cout << max(ans1, ans2) << endl;
    // for (int x : aux)
    //     cout << x << " ";
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}