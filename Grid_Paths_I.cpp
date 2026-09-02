#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int mod=1e9+7;

void solve(){
    int n;cin>>n;
    vector<string> s(n);
    for(auto &i:s)cin>>i;
    vector<vector<int>> dp(n,vector<int>(n,0));
    dp[0][0]=1;
    if(s[0][0]=='*' || s[n-1][n-1]=='*'){cout<<0<<nl;return;}

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='*')continue;
            if(i+1<n) dp[i+1][j]=(dp[i][j]+dp[i+1][j])%mod;
            if(j+1<n) dp[i][j+1]=(dp[i][j]+dp[i][j+1])%mod;
            
        }
    }
    cout<<dp[n-1][n-1]<<nl;
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}