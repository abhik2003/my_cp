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
    vector<int> a(n), b(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n;i++)
        cin >> b[i];

    int pos = 0;
    int neg = 0;
    int A = 0, B = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>b[i])
            A += a[i];
        else if(a[i]<b[i])
            B += b[i];
        else{
            if(a[i]==1)
                pos++;
        
            if(a[i]==-1)
                neg++;
        }
    }
    // cout << A << " " << B << " " << pos << " " << neg << endl;
    if (pos == 0 && neg == 0)
    {
        cout << min(A, B) << endl;
        return;
    }
    if(A>B)
        swap(A, B);
    if(pos>0){
        int d = B - A;
        A += min(d, pos);
        pos -= min(d, pos);
        A += (pos+1) / 2;
        B += pos / 2;
        // cout << A << endl;
    }
    if (A > B)
        swap(A, B);
    if(neg>0){
        int d = B - A; // neg
        B -= min(d, neg);
        neg -= min(d, neg);

        A -= (neg + 1) / 2;
        B -= neg / 2;
    }
    cout << min(A,B) << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}