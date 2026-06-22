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
    int n,q;cin>>n>>q;
    vector<pair<int,int>> a(n+2);
    int mx=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[i].second=a[i-1].second+x;
        mx=max(mx,x);
        a[i].first=mx;
    }
    a[n+1].first=LLONG_MAX;
    a[n+1].second=LLONG_MAX;
    // for(auto [x,y]:a)cout<<x<<' '<<y<<nl;nf;nf;
    while(q--){
        int x;cin>>x;
        auto it=--upper_bound(a.begin(),a.end(),make_pair(x,LLONG_MAX));
        cout<<it->second<<' ';
    }
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}