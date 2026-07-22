#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
int n,m;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

bool ok(int x,int y){
    return (x>=0 && y>=0 && x<n && y<m);
}
void solve(){
    cin>>n>>m;
    vector<vector<bool>> vis(n,vector<bool> (m,false));
    vector<vector<pair<int,int>>> path(n,vector<pair<int,int>> (m,{-1,-1}));
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=true;
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(ok(nx,ny) && !vis[nx][ny]){
                vis[nx][ny]=true;
                q.push({nx,ny});
                path[nx][ny]={x,y};
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            auto [x,y]=path[i][j];
            cout<<x<<','<<y<<' ';
        }
        cout<<'\n';
    }
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}