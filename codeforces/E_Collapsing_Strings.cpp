#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define ll long long
#define alpha 26
using namespace std;
 
// #ifdef LOCAL
// #include "debuglib.h"
// #else
// #endif
 
const int INF=1e8;
const int M=1e9+7;

class Tries
{
    private:
    map<int,ll> freq;
    map<int,Tries *> child;
    public:
    Tries(){
    }
    void addString(string &s,int l,int r){
        // cout << s << l << r<<endl;
        if(l==r){
            if(child[s[l]-'a']==nullptr){
                child[s[l] - 'a'] = new Tries();
                freq[s[l] - 'a'] = 1;
            }
            else{
                freq[s[l] - 'a'] ++;
            }
        }
        else{
            if(child[s[l]-'a']==nullptr){
                child[s[l] - 'a'] = new Tries();
                freq[s[l] - 'a'] = 1;
            }
            else{
                freq[s[l] - 'a'] ++;
            }
            child[s[l] - 'a']->addString(s, l + 1, r);
        }
    }
    ll score(string &s, int l,int r){
        if(l==r){
            if(child[s[l]-'a']==nullptr){
                return 0;
            }
            else{
                return freq[s[l] - 'a']*2;
            }
        }
        else{
            if(child[s[l]-'a']==nullptr){

                return 0;
            }
            else{
                return (freq[s[l] - 'a'] * 2 + child[s[l] - 'a']->score(s, l + 1, r));
                
            }
        }

    }
};


void test_case()
{

    ll n;
    cin >> n;
    Tries root = Tries();
    vector<string> s_vec(n);
    ll tot_len = 0;
    for (int i = 0; i < n;i++){
        cin >> s_vec[i];
        root.addString(s_vec[i],0,s_vec[i].length()-1);
        tot_len += s_vec[i].length();
    }
    ll ans = 0;
    for(auto &s:s_vec){
        ll len = s.length();
        ans += n * len + tot_len;
        reverse(s.begin(), s.end());
        ans -= root.score(s, 0, len - 1);
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;
    // cin >> t;
    while(t--)
        test_case();
}