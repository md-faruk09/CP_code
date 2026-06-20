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
vector<int> mark(N);
bool cycle=false;
vector<int> topsort;
void dfs(int node){
    if(mark[node]==2)return;
    if(mark[node]==1){
        cycle=true;
        return;
    }
    mark[node]=1;
    for(auto u:adj[node]){
        dfs(u);
    }
    mark[node]=2;
    topsort.push_back(node);
}

void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(!mark[i])dfs(i);
    }
    if(cycle){cout<<"IMPOSSIBLE";return;}
    reverse(all(topsort));
    for(auto i:topsort)cout<<i<<" ";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}