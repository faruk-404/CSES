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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    sort(all(a));
    int N=accumulate(a.begin(),a.end(),0LL);
    vector<int>dp(N+1,-1);
    dp[0]=0;
    set<int>ans;
    for(auto c:a){
        for(int i=N;i>=0;i--){
            if(dp[i]==-1 || c+i>N)continue;
            dp[i+c]=i+c;
            ans.insert(i+c);
        }
    }
    cout<<ans.size()<<nl;
    for(auto i:ans)cout<<i<<' ';
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}