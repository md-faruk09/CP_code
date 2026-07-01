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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int> pre(n+1);
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+a[i];
    }
    for(auto &i:pre){
        i=((i%n)+n)%n;
    }
    // for(auto i:pre)cout<<i<<' ';nf;
    map<long long, long long > mp;
    int ans=0;
    for(int i=0;i<=n;i++){
        ans+=mp[pre[i]];
        // cout<<ans<<' '<< mp[n-pre[i]]<<' '<<pre[i]<<nl;
        mp[pre[i]]++;
    }
    // nf;nf;
    // for(auto [x,y]:mp)cout<<x<<' '<<y<<nl;
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}