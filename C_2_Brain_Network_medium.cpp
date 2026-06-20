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
vector<int> adj[N];
int fathest_node,fathest_dist;
void fun(int node,int parent,int dist){
    if(dist>fathest_dist){
        fathest_node=node;
        fathest_dist=dist;
    }
    for(auto u:adj[node]){
        if(u==parent)continue;
        fun(u,node,dist+1);
    }
}

void solve(){
    int n,m;cin>>n>>m;
    for( int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    fathest_dist=0;
    fathest_node=1;
    fun(1,-1,0);
    
    int dy=fathest_node;
    fun(dy,-1,0);
    cout<<fathest_dist<<nl;
    
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}