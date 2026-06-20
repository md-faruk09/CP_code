// // https://codeforces.com/contest/727/problem/A

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
//     int a,b;cin>>a>>b;
//     vector<int>ans;
//     while(b>a){
//         ans.push_back(b);
//         if(!(b&1))b/=2;
//         else if(b%10==1)b/=10;
//         else break;
//     }
//     ans.push_back(b);
//     if(ans.back()==a){
//         cout<<"YES\n";
//         cout<<ans.size()<<'\n';
//         reverse(ans.begin(),ans.end());
//         for(auto i:ans)cout<<i<<' ';
//         cout<<'\n';
//     }
//     else cout<<"NO\n";
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }


//https://cses.fi/problemset/task/1668 

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
int color[N];
int possible=1;
void dfs(int node,int clr){
    if(possible==0)return;
    color[node]=clr;
    for(auto u:adj[node]){
        if(color[u]==clr){
            possible=0;
            return;
        }
        else{
            if(color[u]==0)
            dfs(u,2-(clr==2));
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
    for(int i=1;i<=n;i++){
        if(color[i]!=0)continue;
        dfs(i,1);
        if(possible==0){
           cout<<"IMPOSSIBLE\n";
           return;
        }
    }
    for(int i=1;i<=n;i++)cout<<color[i]<<' ';
    cout<<'\n';

    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}