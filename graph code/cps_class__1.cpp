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

// // adj matrix
// void solve(){
//     int n,m;cin>>n>>m;
//     int adj[n+1][n+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<n+1;j++){
//             adj[i][j]=0;
//         }
//     }
//     for(int i=0;i<m;i++){
//         int u,v;cin>>u>>v;
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<n+1;j++){
//             cout<<adj[i][j]<<' ';
//         }
//         cout<<nl;
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }



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

// //adj list
// void solve(){
//     int n,m;cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for(int i=1;i<n+1;i++){
//         cout<<i<<" --> {";
//         for(auto j:adj[i]){
//             cout<<j<<' ';
//         }
//         cout<<"}\n";
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


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

// BFS ( breath First Search )
void solve(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int visited[n+1];
    int level[n+1];
    for(int i=0;i<n+1;i++) visited[i]=0;
    queue<int>q;
    int sorce;sorce=3;
    q.push(sorce);
    visited[sorce]=1;
    level[sorce]=1;
    while(!q.empty()){
        int node=q.front();
        cout<<node<<' ';
        for(auto u:adj[node]){
            if(visited[u])continue;
            visited[u]=1;
            level[u]=level[node]+1;
            q.push(u);
        }
        q.pop();
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}