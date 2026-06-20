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

void solve(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> visited(n+3);
    vector<int> path(n+3,-1);
    queue<int>q;
    q.push(1);
    visited[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto u:adj[node]){
            if(visited[u])continue;
            path[u]=node;
            visited[u]=1;
            q.push(u);
        }
    }
    if(visited[n]==0){cout<<"IMPOSSIBLE";return;}
    vector<int> ans;
    int current=n;
    while (current!=-1){
        ans.push_back(current);
        current=path[current];
    }
    reverse(all(ans));
    cout<<ans.size()<<nl;
    for(auto x:ans)cout<<x<<' ';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}