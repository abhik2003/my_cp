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
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int not_sorted = 0;
    int ind = -1,ind2=-1;
    for (int i = 0; i < n-1;i++){
        if(v[i]>v[(i+1)]){
            not_sorted++;
            ind = i;
        }
        else if (v[i]<v[(i+1)]){
            ind2 = i;
        }
    }
    if(not_sorted==0 ){
        cout << "0\n";
        return;
    }
    else if(not_sorted==(n-1)){
        if(n==1){
            cout << "0\n";
        }
        else{
            cout << "1\n";
        }
    }
    else{
        vector<int> new_vec;
        int op1, op2;

        for (int i = ind+1; i <n; i++)
            new_vec.push_back(v[i]);
        for (int i = 0; i <= ind;i++)
            new_vec.push_back(v[i]);
        int not_sorted = 0;
        
        for (int i = 0; i < n-1;i++){
            if(new_vec[i]>new_vec[(i+1)]){
                not_sorted++;
            }
        }

        if(not_sorted==0 ){
            int ans1 = (n - 1 - ind);
            int ans2 = 3 + ind;
            // cout << min(ans1,ans2)<<endl;
            op1 = min(ans1, ans2);
            // return;
        }
        else if(not_sorted==(n-1)){
            int ans1= (n - 1 - ind)+1;
            int ans2 = ind + 2;
            // cout << min(ans1,ans2)<<endl;
            op1 = min(ans1, ans2);
            // return;
        }
        else{
            // cout << "-1\n";
            op1 = -1;
            // return;
        }
        ////////////////////////////////////////////

        vector<int> new_vec1;
        // int op1, op2;
        ind = ind2;

        for (int i = ind+1; i <n; i++)
            new_vec1.push_back(v[i]);
        for (int i = 0; i <= ind;i++)
            new_vec1.push_back(v[i]);
        not_sorted = 0;
        
        for (int i = 0; i < n-1;i++){
            if(new_vec1[i]<new_vec1[(i+1)]){
                not_sorted++;
            }
        }

        if(not_sorted==(n-1) ){
            int ans1 = (n - 1 - ind);
            int ans2 = 3 + ind;
            // cout << min(ans1,ans2)<<endl;
            op2 = min(ans1, ans2);
            // return;
        }
        else if(not_sorted==0){
            int ans1= (n - 1 - ind)+1;
            int ans2 = ind + 2;
            // cout << min(ans1,ans2)<<endl;
            op2 = min(ans1, ans2);
            // return;
        }
        else{
            // cout << "-1\n";
            op2 = -1;
            // return;
        }
        if(op1==-1 && op2==-1){
            cout << "-1\n";
        }
        else if(op1==-1){
            cout << op2 << endl;
        }
        else if(op2==-1){
            cout << op1 << endl;
        }
        else{
            cout << min(op1, op2) << endl;
        }
    }
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}