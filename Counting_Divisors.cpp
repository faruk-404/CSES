#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e6+10;
vector<int> prime(N,0);
void ok(){
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            prime[j]++;
        }
    }
}

void solve(){
    int n;cin>>n;
    cout<<prime[n]<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ok();
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}