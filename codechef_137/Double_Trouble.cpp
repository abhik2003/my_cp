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
    vector<int> x(n), p(n);

    for (int i = 0; i < n;i++){
        cin >> x[i];
    }
    for (int i = 0; i < n;i++){
        cin >> p[i];
    }

    vector<int> prob;
    for (int i = 0; i < n - 1;i++){
        int d = x[i + 1] - x[i];
        if(p[i]<d && p[i+1]<d){
            prob.push_back(i);
        }
    }

    if(prob.size()>1){
        cout << "NO\n";
        return;
    }
    
    if(prob.size()==0){
        string s = "";
        int l = 0, r = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int d = x[i + 1] - x[i];
            if (p[i] >= d && p[i + 1] >= d)
            {
                continue;
            }
            if(p[i]>=d){
                s += 'R';
                r++;
            }
            else{
                s += 'L';
                l++;
            }
        }
        int p = 0;
        for (int i = 0; i < ((int)s.length() - 1); i++)
        {
            if(s[i]!=s[i+1]){
                p++;
            }
        }
        if(p>2){
            cout << "NO\n";
            return;
        }
        else if(p==2){
            if(l==1 || r==1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";

            }
            return;
        }
        else{
            cout << "YES\n";
            return;
        }
    }

    bool check1 = 1, check2 = 1;
    for (int i = 0; i < prob[0];i++){
        int d = x[i + 1] - x[i];
        if(p[i]<d)
            check1 = 0;
    }
    for (int i = 0; i < prob[0];i++){
        int d = x[i + 1] - x[i];
        if(p[i+1]<d)
            check2 = 0;
    }
    if((check1 | check2)==0){
        cout << "NO\n";
        return;
    }

    check1 = 1, check2 = 1;
    for (int i = prob[0]+1; i < n-1; i++)
    {
        int d = x[i + 1] - x[i];
        if (p[i] < d)
            check1 = 0;
    }
    for (int i = prob[0] + 1; i < n - 1; i++)
    {
        int d = x[i + 1] - x[i];
        if (p[i + 1] < d)
            check2 = 0;
    }
    if ((check1 | check2) == 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}