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
const int N=1e6+4;
vector<int> adj[N];
vector<int> visited(N);
void dfs(int node){
    visited[node]=1;
    for(auto u:adj[node]){
        if(visited[u])continue;
        dfs(u);
    }
}
void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        ans.push_back(i);
        dfs(i);
    }
    cout<<ans.size()-1<<nl;
    for(int i=0;i<(int)ans.size()-1;i++){
        cout<<ans[i]<<' '<<ans[i+1]<<nl;  
    }
    

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}