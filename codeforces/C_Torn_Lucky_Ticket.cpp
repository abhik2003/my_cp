#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define endl '\n';
#define __builtin_popcount(x) __builtin_popcountll(x)
#define int long long
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
    map<int, int> one,two,three0,three1,three2,four0,four1,four2,five0,five1,five3,five4,five5;
    int ans=0;
    vector<string> s_list;
    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        s_list.push_back(s);

        vector<int> sum(s.length());
        sum[0] = s[0] - '0';
        for (int j = 1; j < s.length();j++){
            sum[j] = sum[j - 1] + s[j] - '0';
        }
        // cout << "Hi";
        switch (s.length())
        {
        case 1:
            one[sum[0]]++;
            // ans += one[sum[0]];    //1 1
            // ans += three0[sum[0]]; //1 3
            // ans += three1[sum[0]]; //3 1
            // ans += five0[sum[0]];  //1 5
            // ans += five1[sum[0]];  //5 1
            break;
        case 2:
            two[sum[1]]++;
            // ans += two[sum[1]];   //2 2
            // ans += four0[sum[1]]; //2 4
            // ans += four1[sum[1]];  //4 2
            break;
        case 3:
            three2[sum[2]]++;
            three0[sum[2] - 2*sum[0]]++;
            three1[2 * sum[1] - sum[2]]++;
            // ans += three2[sum[2]]; //3 3
            // ans += one[sum[2] - 2 * sum[0]];  //1 3
            // ans += one[2*sum[1] - sum[2]];  //3 1
            // ans += five3[sum[2]];  //3 5
            // ans += five4[sum[2]];  //5 3
            break;
        case 4:
            four0[sum[3] - 2 * sum[0]]++;
            four1[2 * sum[2] - sum[3]]++;
            four2[sum[3]]++;
            break;
        case 5:
            five0[sum[4] - 2 * sum[1]]++;
            five1[2 * sum[2] - sum[4]]++;
            five3[sum[4] - 2 * sum[0]]++;
            five4[2 * sum[3] - sum[4]]++;
            five5[sum[4]]++;
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < n;i++){
        string s = s_list[i];

        vector<int> sum(s.length());
        sum[0] = s[0] - '0';
        for (int j = 1; j < s.length();j++){
            sum[j] = sum[j - 1] + s[j] - '0';
        }
        // cout << "Hi";
        switch (s.length())
        {
        case 1:
            // one[sum[0]]++;
            ans += one[sum[0]];    //1 1
            ans += three0[sum[0]]; //1 3
            // ans += three1[sum[0]]; //3 1
            ans += five0[sum[0]];  //1 5
            // ans += five1[sum[0]];  //5 1
            break;
        case 2:
            // two[sum[1]]++;
            ans += two[sum[1]];   //2 2
            ans += four0[sum[1]]; //2 4
            // ans += four1[sum[1]];  //4 2
            break;
        case 3:
            // three2[sum[2]]++;
            // three0[sum[2] - 2*sum[0]]++;
            // three1[2 * sum[1] - sum[2]]++;
            ans += three2[sum[2]]; //3 3
            // ans += one[sum[2] - 2 * sum[0]];  //1 3
            ans += one[2*sum[1] - sum[2]];  //3 1
            ans += five3[sum[2]];  //3 5
            // ans += five4[sum[2]];  //5 3
            break;
        case 4:

            ans += four2[sum[3]]; //4 4
            // ans += two[sum[3] - 3 * sum[0]];  //2 4
            ans += two[2 * sum[2] - sum[3]];  //4 2

            break;
        case 5:

            ans += five5[sum[4]];  //5 5
            ans+=one[2 * sum[2] - sum[4]]; //5 1
            ans += three2[2 * sum[3] - sum[4]]; //5 3
            break;
        default:
            break;
        }
        // cout << ans << endl;
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