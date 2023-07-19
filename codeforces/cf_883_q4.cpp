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
    cout << fixed << setprecision(7);
    int n;
    double  d, h;
    cin >> n >> d >> h;
    double y[n];
    for (int i = 0; i < n;i++){
        cin >> y[i];
    }
    
    double area = (d * h) / 2;
    double tot_area = area*n;
    for (int i = n-2; i >=0;i--){
        double x = h - y[i + 1] + y[i];
        if (x>0){
            double overlap = ((x * x) / (h * h)) * area;
            // cout << tot_area << " " << i<<" "<<overlap<<endl;
            tot_area -= overlap;
        }
    }
    cout << tot_area << endl;
    // printf("%.7f\n", tot_area);
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}