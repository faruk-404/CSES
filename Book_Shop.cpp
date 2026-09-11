#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,x;cin>>n>>x;
    vector<int> a(n),p(n);
    for(auto &i:a)cin>>i;
    for(auto &i:p)cin>>i;
    vector<int> dp(x+1,-1);
    dp[0]=0;
    for(int j=0;j<n;j++){
        for(int i=x;i>=0;i--){
            if(dp[i]==-1 || (i+a[j])>x)continue;
            dp[i+a[j]]=max(dp[i+a[j]],(dp[i]+p[j]));
        }
    }
    cout<<*max_element(all(dp));
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}