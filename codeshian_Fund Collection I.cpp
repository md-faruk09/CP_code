#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,m;cin>>n>>m;
    vector<int> adj(n+1);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a]=b;
    }
    if(n!=(m+1)){cout<<"NO";return;};
    for(int i=1;i<n;i++){
        if(adj[i]!=(i+1)){cout<<"NO\n";return;}
    }
    cout<<"YES"<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}