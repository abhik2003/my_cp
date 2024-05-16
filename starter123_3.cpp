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
class Compare {
    public:
       bool operator()(vector<int>  a, vector<int>  b){
           return a[2]>b[2];
      }
};
void test_case()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > grid(n,vector<int>(m)), aux(n,vector<int>(m,-1));
    priority_queue<vector<int> , vector<vector<int> >, Compare> q;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            grid[i][j]=(s[i]=='1');
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(i==0 || j==0 || i==(n-1) || j==(m-1) && grid[i][j]==0){
                // q.push({i,j,0});
                vector<int> v={i,j,0};
                q.push(v);
                aux[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0 || i==(n-1) || j==(m-1) && grid[i][j]==1){
                vector<int> v={i,j,1};
                q.push(v);
                aux[i][j]=1;
            }
        }
    }
    vector<int> dx={0,0,-1,1};
    vector<int> dy={-1,1,0,0};

    while(!q.empty()){
        vector<int> front = q.top();
        q.pop();

        for(int i=0;i<4;i++){
            int x=front[0]+dx[i];
            int y=front[1]+dy[i];

            if(aux[x][y]!=-1){
                aux[x][y]=front[2]+grid[x][y];
                vector<int> v={x,y,aux[x][y]};
                q.push(v);
            }
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans=max(ans,aux[i][j]);
        }
    }
    cout<<ans<<endl;
    

    
}

int32_t main(){
    fastio;
    int t=1;
    cin >> t;
    while(t--)
        test_case();
}