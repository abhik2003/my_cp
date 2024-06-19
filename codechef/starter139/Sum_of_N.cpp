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

vector<bool> is_prime;
vector<int> prime;
vector<int> prefix_prime;
vector<int> sieveoferat(int n)
{
    is_prime.resize(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector<int> prime;
    prefix_prime.resize(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        if(is_prime[i]){
            prime.push_back(i);
            prefix_prime[i] = prefix_prime[i - 1] + i;
        }
    }
    return prime;
}

void test_case()
{

    int k;
    cin >> k;
    int sum = 0;
    if(is_prime[k]){
        sum = prefix_prime[k];
        cout << k * sum << endl;
        return;
    }
    for (int p : prime)
    {
        sum += p;
        if (k % p == 0)
        {
            break;
        }
    }
    cout << k * sum << endl;
}

int32_t main(){
    fastio;
    int t=1;
    prime = sieveoferat(100007);
    
    cin >> t;
    while(t--)
        test_case();
}