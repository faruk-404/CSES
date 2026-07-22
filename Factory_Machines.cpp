#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

bool ok(int mid,vector<int> a,int t){
    int cnt=0;
    for(int i=0;i<(int)a.size();i++){
        cnt+=(mid/a[i]);
        if((cnt>=t))return true;
    }
    return (cnt>=t);
}
void solve(){
    int n,t;cin>>n>>t;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int l=0,r=1e18,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid,a,t)){
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}