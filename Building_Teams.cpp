#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=2e6+1;
vector<int> adj[N];
vector<int> color(N,-1);
bool bfs(int src){
    queue<int> q;
    q.push(src);
    color[src]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(color[v]==-1){
                color[v]=color[u]^1;
                q.push(v);
            }else if( color[v]==color[u]) return false;
        }
    }
    return true;
}

void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(color[i]==-1)if(!bfs(i)){cout<<"IMPOSSIBLE";return;};
    }
    for(int i=1;i<=n;i++)cout<<2-(color[i]==1)<<' ';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}