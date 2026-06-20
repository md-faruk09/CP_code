#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

const int N=2e5+5;
vector<int>adj[N];
int visited[N];
int depth[N];
int subtree_sz[N];

void dfs(int node){
    visited[node]=1;
    subtree_sz[node]=1;
    for(auto u:adj[node]){
        if(visited[u]==0){
            depth[u]=depth[node]+1;
            dfs(u);
            subtree_sz[node]+=subtree_sz[u];
        }
    }
}

void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout<<"Subtree \n";
    for(int i=1;i<=n;i++){
        cout<<i<<" ---> "<<subtree_sz[i]<<nl;
    }
    cout<<nl<<"Depth: \n";
    for(int i=1;i<=n;i++){
        cout<<i<<" --->> "<<depth[i]<<nl;
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}