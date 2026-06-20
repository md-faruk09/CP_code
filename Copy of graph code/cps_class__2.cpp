//cses.fi/problemset/task/1666/

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


// void solve(){
//     int n,m;cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> component;
//     int visited[n+1];
//     memset(visited,0,sizeof(visited));
//     for(int i=1;i<n+1;i++){
//         if(visited[i])continue;
//         queue<int>q;
//         q.push(i);
//         visited[i]=1;
//         component.push_back(i);
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
//             for(auto j:adj[node]){
//                 if(visited[j])continue;
//                 visited[j]=1;
//                 q.push(j);
//             }
//         }
//     }
//     cout<<component.size()-1<<nl;
//     for(int i=1;i<component.size();i++){
//         cout<<component[i-1]<<' '<<component[i]<<nl;
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }

// //cses.fi/problemset/task/1667

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


// void solve(){
//     int n,m;cin>>n>>m;
//     vector<int>adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int visited[n+1];
//     memset(visited,0,sizeof(visited));
//     int dist[n+1];
//     memset(dist,0,sizeof(dist));
//     int previous[n+1];
//     memset(previous,0,sizeof(previous));
//     queue<int>q;
//     q.push(1);
//     dist[1]=0;
//     visited[1]=1;
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         for(auto v:adj[node]){
//             if(visited[v])continue;
//             visited[v]=1;
//             dist[v]=dist[node]+1;
//             previous[v]=node;
//             q.push(v);
//         }
//     }
//     // for(int i=0;i<n+1;i++){
//     //     cout<<i<<' '<<previous[i]<<nl;
//     // }
//     if(!visited[n]){
//         cout<<"IMPOSSIBLE\n";
//         return;
//     }
//     vector<int>path;
//     int current=n;
//     path.push_back(current);
//     while(current!=1){
//         current=previous[current];
//         path.push_back(current);
//     }
//     cout<<path.size()<<nl;
//     for(int i=path.size()-1;i>=0;i--){
//         cout<<path[i]<<' ';
//     }
//     cout<<nl;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


// // https://cses.fi/problemset/task/1193

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


// void solve(){
//     int n,m;cin>>n>>m;
//     char grid[n][m];
//     pair<int,int>st,en;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>grid[i][j];
//             if(grid[i][j]=='A')st={i,j};
//             if(grid[i][j]=='B')en={i,j};
//         }
//     }
//     int visited[n][m];
//     memset(visited,0,sizeof(visited));
//     char prev[n][m];
//     queue<pair<int,int>>q;
//     q.push(st);
//     visited[st.first][st.second]=1;
//     while(!q.empty()){
//         auto [r,c]=q.front();
//         q.pop();
        
//         //r+1,c -->D
//         if(r+1<n && !visited[r+1][c] && grid[r+1][c]!='#'){
//             q.push({r+1,c});
//             visited[r+1][c]=1;
//             prev[r+1][c]='D';
//         }
//         //r-1,c -->U
//         if(r-1>=0 && !visited[r-1][c] && grid[r-1][c]!='#'){
//             q.push({r-1,c});
//             visited[r-1][c]=1;
//             prev[r-1][c]='U';
//         }
//         //r,c+1 -->R
//         if(c+1<m && !visited[r][c+1] && grid[r][c+1]!='#'){
//             q.push({r,c+1});
//             visited[r][c+1]=1;
//             prev[r][c+1]='R';
//         }
//         //r,c-1 -->L
//         if(c-1>=0 && !visited[r][c-1] && grid[r][c-1]!='#'){
//             q.push({r,c-1});
//             visited[r][c-1]=1;
//             prev[r][c-1]='L';
//         }
    
//     }
//     if(!visited[en.first][en.second]){
//         cout<<"NO\n";
//         return;
//     }
//     cout<<"YES\n";
//     string path="";
//     // path+=prev[en.first][en.second];
//     pair<int,int> current;
//     current=en;
//     while(current!=st){
//         char c=prev[current.first][current.second];
//         path+=prev[current.first][current.second];
//         if(c=='R') current.second--;
//         else if(c=='L')current.second++;
//         else if(c=='D')current.first--;
//         else current.first++;
//     }
//     reverse(path.begin(),path.end());
//     cout<<path.size()<<nl;
//     cout<<path<<nl;

// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


//codeforces.com/contest/1272/problem/E 

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


void solve(){
    int n;cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int> adj[n+1],odd,even;
    for(int i=1;i<=n;i++){
        if(arr[i]&1) odd.push_back(i);
        else even.push_back(i);
        if(i+arr[i]<=n){
            int u=i;
            int v=i+arr[i];
            adj[v].push_back(u); //ulta graph
        }
        if(i-arr[i]>=1){
            int u=i;
            int v=i-arr[i];
            adj[v].push_back(u);
        }
    }

    //odd theke bfs
    int visited1[n+1];
    memset(visited1,0,sizeof(visited1));
    int dist1[n+1];
    queue<int>q1;
    for(auto u:odd){
        q1.push(u);
        visited1[u]=1;
        dist1[u]=0;
    }
    while(!q1.empty()){
        int node=q1.front();
        q1.pop();
        for(auto v:adj[node]){
            if(visited1[v])continue;
            visited1[v]=1;
            dist1[v]=dist1[node]+1;
            q1.push(v);
        }
    }

    // even theke bfs
    int visited2[n+1];
    memset(visited2,0,sizeof(visited2));
    int dist2[n+1];
    queue<int>q2;
    for(auto u:even){
        q2.push(u);
        visited2[u]=1;
        dist2[u]=0;
    }
    while(!q2.empty()){
        int node=q2.front();
        q2.pop();
        for(auto v:adj[node]){
            if(visited2[v])continue;
            visited2[v]=1;
            dist2[v]=dist2[node]+1;
            q2.push(v);
        }
    }
    for(int i=1;i<=n ;i++){
        if(arr[i]&1){
            if(!visited2[i]) cout<<-1<<' ';
            else cout<<dist2[i]<<' ';
        }
        else{
            if(!visited1[i]) cout<<-1<<' ';
            else cout<<dist1[i]<<' ';
        }
    }
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}