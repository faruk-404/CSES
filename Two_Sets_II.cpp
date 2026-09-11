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


int bigmod(int a,int b){
    if(b==0)return 1;
    if(b%2){
        return (a%mod*bigmod(a,b-1)%mod)%mod;
    }
    int tmp=bigmod(a,b/2)%mod;
    return (tmp*tmp)%mod;
}

void solve(){
    int n;cin>>n;
    int sum=(n*(n+1))/2;
    if(sum&1){cout<<0<<nl;return;}
    int N=(sum/2);
    vector<int> dp(N+5,0);
    dp[0]=1;
    for(int k=1;k<=n;k++){
        for(int i=N;i>=0;i--){
            if(k+i>N || dp[i]==0)continue;
            dp[i+k]=(dp[i+k]+dp[i])%mod;
        }
    }
    cout<<(dp[N]*bigmod(2,mod-2))%mod<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}