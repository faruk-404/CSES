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
char out(int x,int y){
    char val;
    int a=-1,b=0;
    if(x==-1 && y==b)val='U';
    else if(x==1 && y==0)val='D';
    else if(x==0 && y==-1) val='R';
    else if(x==0 && y==1)val='L';
    return val;
}

void solve(){
    cin>>n>>m;
    vector<string> gid(n);
    pair<int,int> st={-1,-1}, en={-1,-1};

    for(int i=0;i<n;i++){
        cin >> gid[i];   // পুরো row string হিসেবে read
        for(int j=0;j<m;j++){
            if(gid[i][j]=='A') st={i,j};
            if(gid[i][j]=='B') en={i,j};
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m,false));
    vector<vector<pair<int,int>>> path(n, vector<pair<int,int>>(m,{-1,-1}));
    queue<pair<int,int>> q;

    q.push(st);
    vis[st.first][st.second]=true;

    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(ok(nx,ny) && !vis[nx][ny] && gid[nx][ny]!='#'){
                vis[nx][ny]=true;
                q.push({nx,ny});
                path[nx][ny]={x,y};
            }
        }
    }

    string ans="";
    while()
    reverse(all(ans));
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