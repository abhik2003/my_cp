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
    int a, b, x1, y1, x2, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;

    vector<int> dx  {a,a,-a,-a,b,b,-b,-b};
    vector<int> dy  {b,-b,b,-b,a,-a,a,-a};

    int ans = 0;
    for (int i = 0; i < (a==b?4:8);i++){
        int px = dx[i]+x1;
        int py = dy[i]+y1;

        int flag = false;
        for (int j = 0; j < (a==b?4:8);j++){
            int pxx = px + dx[j];
            int pyy = py + dy[j];

            if(pxx==x2 && pyy==y2){
                flag = true;
            }
        }
        if(flag)
            ans++;
    }
    cout << ans<<endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}