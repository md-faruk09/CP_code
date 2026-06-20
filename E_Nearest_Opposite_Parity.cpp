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
            adj[v].push_back(u); 
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