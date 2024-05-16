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

int query(vector<int> v,int ind){
    sort(v.begin(),v.begin()+ind);
    int x=ind/2;
    int ans=0;
    for(int i=0;i<x;i++)ans-=v[i];
    for(int i=x;i<ind;i++)ans+=v[i];
    return ans;
}

void test_case()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    priority_queue<int, vector<int>, greater<int>()> pq;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini=0;
    int pref=0;
    for(int i=0;i<min(n,(long long)3);i++){
        pq.push(v[i]);
        pref+=v[i];
    }
    vector<int> ans(n);
    ans[0]=v[0];
    for(int i=3;i<n;i+=2){
        pq.push(v[i]);
        if(i!=n-1)pq.push(v[i+1]);
        mini+=pq.top();
        pq.pop();
        ans[i]=pref-2*mini;
        pref+=v[i];
        if(i!=n-1)pref+=v[i+1];
    }



    while(q--){
        int ind;
        cin>>ind;
        cout<<ans[ind-1]<<" ";
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}