// // https://cses.fi/problemset/submit/1131/

// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define fr(N)for(int i=0;i<N;i++)
// #define frg(x,a) for(auto x:a)
// #define vll vector<long long>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// const int N=2e5+5;
// vector<int> adj[N];
// int farthest_node,farthest_dist;
// void fun(int node,int parent,int dist){
//     if(dist>farthest_dist){
//         farthest_node=node;
//         farthest_dist=dist;
//     }
//     for(auto u:adj[node]){
//         if(u==parent)continue;
//         fun(u,node,dist+1);
//     }
// }

// void solve(){
//     int n;cin>>n;
//     for(int i=0;i<n-1;i++){
//         int u,v;cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     farthest_dist=0;
//     farthest_node=1;
//     fun(1,-1,0) ;
//     fun(farthest_node,-1,0);
//     cout<<farthest_dist<<nl;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


// // https://cses.fi/problemset/task/1132

// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define fr(N)for(int i=0;i<N;i++)
// #define frg(x,a) for(auto x:a)
// #define vll vector<long long>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// const int N=2e5+5;
// vector<int> adj[N];
// int farthest_node,farthest_dist;
// void fun(int node,int parent,int dist){
//     if(dist>farthest_dist){
//         farthest_node=node;
//         farthest_dist=dist;
//     }
//     for(auto u:adj[node]){
//         if(u==parent)continue;
//         fun(u,node,dist+1);
//     }
// }
// int arr1[N],arr2[N];
// bool f=true;
// void dfs(int node,int parent,int dist){
//     if(f)arr1[node]=dist;
//     else arr2[node]=dist;
//     for(auto u:adj[node]){
//         if(u==parent)continue;
//         dfs(u,node,dist+1);
//     }
// }

// void solve(){
//     int n;cin>>n;
//     for(int i=0;i<n-1;i++){
//         int u,v;cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     farthest_dist=0;
//     fun(1,-1,0);
//     int x=farthest_node;
//     farthest_dist=0;
//     fun(x,-1,0);
//     int y=farthest_node;
//     f=true;
//     dfs(x,-1,0);
//     f=false;
//     dfs(y,-1,0);
//     for(int i=1;i<=n;i++){
//         cout<<max(arr1[i],arr2[i])<<' ';
//     }
//     cout<<'\n';

// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


// https://codeforces.com/contest/580/problem/C

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
int cat[N];
int n,m;
int ans=0;
void dfs(int node,int parent ,int val){
    if(cat[node]==0)val=0;
    else val=val+1;
    if(val>m)return;
    for(auto u : adj[node]){
        if(u==parent)continue;
        dfs(u,node,val);
    }
    if(node !=1 && (int)adj[node].size()==1)ans++;
}

void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>cat[i];
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,0);
    cout<<ans<<'\n';
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}