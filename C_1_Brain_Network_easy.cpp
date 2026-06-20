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
const int N=1e5+5;
vector<int> adj[N];
vector<int>visited(N);
bool dfs(int u,int p){
    visited[u]=1;
    for(auto v:adj[u]){
        if(!visited[v]){
            if(dfs(v,u) )return true;
        }
        else if(v!=p)return true;
        
    }
    return false;
}
void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m!=(n-1)){cout<<"no\n";return;}
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if (dfs(1,-1)){
                cout<<"no\n";return;
            }
        }
    }
    cout<<"yes\n"<<nl;


}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}