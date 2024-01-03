#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
using namespace std;
 
#ifdef LOCAL
#include "debuglib.h"
#else
#endif
 
const int INF=1e8;
const int M=1e9+7;

void test_case()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    bool flag = true;
    for (int i = 0; i < n;i++){
        if(a[i]==b[i])continue;
        if(a[i]>b[i]){
            flag = false;
            break;
        }
        int j = i - 1;
        bool f1 = false;
        while(j>=0){
            if(a[j]==b[i]){
                f1 = true;
                break;
            }
            if(b[j]<b[i])break;
            j--;
        }
        bool f2 = false;
        j = i + 1;
        while(j<n){
            if(a[j]==b[i]){
                f2 = true;
                break;
            }
            if(b[j]<b[i])break;
            j++;
        }
        if(f1==false && f2==false){
            flag = false;
            break;
        }
        cout << f1 << f2<<i<<endl;
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}