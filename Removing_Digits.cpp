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
    vector<int> dp(n+1,LLONG_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        for(auto d:s){
            if(d==0)continue;
            dp[i]=min(dp[i-(d-'0')]+1,dp[i]);
        }
    }
    cout<<dp[n]<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout<<'\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// const int N=1e6+5;
// vector<int> dp(N,-1);

// void solve(){
//     int n;cin>>n;
//     dp[0]=0;
//     for(int i=1;i<=n;i++){
//         string s=to_string(i);
//         int ans=LLONG_MAX;
//         for(auto c:s){
//             if(c=='0')continue;
//             int cnt=1+dp[i-(c-'0')];
//             ans=min(ans,cnt);
//         }
//         dp[i]=ans;
//     }
//     cout<<dp[n]<<nl;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     // cin>>t;
//     while(t--){solve();}
//     return 0;
// }// #include <bits/stdc++.h>
// // using namespace std;

// // #define nl '\n'
// // #define nf cout<<'\n'
// // #define int long long
// // #define cy cout << "YES\n"
// // #define cn cout << "NO\n"
// // #define all(v) v.begin(),v.end()
// // #define rall(v) v.rbegin(),v.rend()
// // const int N=1e6+5;
// // vector<int> dp(N,-1);

// // int  rec(int n){
// //     if(dp[n]!=-1)return dp[n];
// //     string s=to_string(n);
// //     int ans=LLONG_MAX;
// //     for(auto i:s){
// //         if (i=='0')continue;
// //         int cnt=1+rec(n-(i-'0'));
// //         ans=min(ans,cnt);
// //     }
// //     dp[n]=ans;
// //     return dp[n];
// // }
// // void solve(){
// //     int n;cin>>n;
// //     dp[0]=0;
// //     cout<<rec(n)<<nl;

// // }
// // int32_t main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int t=1;
// //     // cin>>t;
// //     while(t--){solve();}
// //     return 0;
// // }