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
    vector<pair<int,int>> v(n);
    for(auto &[i,j]:v)cin>>j>>i;
    sort(v.rbegin(),v.rend());
    // for(auto [i,j]:v)cout<<i<<' '<<j<<'\n';
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max((long long)v[i].second,mx);
        v[i].second=mx;
    }
    sort(v.begin(),v.end());
    // for(auto [i,j]:v)cout<<i<<' '<<j<<'\n';
    int q;cin>>q;
    while(q--){
        long long x;cin>>x;
        auto it=(lower_bound(v.begin(),v.end(),make_pair(x+1,0LL)));
        cout<<it->second<<'\n';
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}