#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
#define int unsigned int
using namespace std;
 

 
// const int INF=1e8;
// const int M=1e9+7;

void test_case()
{
    int n;
    
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> mat[i][j];
            if(i>j)
                mat[i][j] = 0;
        }
    }
    vector<int> ans(n, 0);
    for (int k = 0; k < 30;k++){
        vector<int> aux(n, 1);
        for (int i = 0; i < n;i++){
            for (int j = i + 1; j < n;j++){
                if((mat[i][j]&(1<<k)) ==0){
                    aux[i] = 0;
                    aux[j] = 0;
                }
            }
        }

        for (int i = 0; i < n;i++){
            if(aux[i]){
                ans[i] += (1 << k);
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if((ans[i]|ans[j])!=mat[i][j]){
                    cout << "NO\n";
                    return;
            }
        }
    }
    cout << "YES\n";
    for(auto x:ans){
        cout << x<<" ";
    }
    cout << endl;
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}