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
    sort(all(a));
    vector<pair<int,int>> v(n+2);
    for(int i=0;i<n;i++){
        v[i+1].first=a[i];
        v[i+1].second=i+1;
    }
    v[n+1].second=n+1;
    v[n+1].first=LLONG_MAX;
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        // auto it=--upper_bound(a.begin(),a.end(),r);
        // auto it1=lower_bound(a.begin(),a.end(),l);
        // int ans=it-it1+1;
        auto it=--upper_bound(v.begin(),v.end(),make_pair(r,LLONG_MAX));
        auto it1= lower_bound(v.begin(),v.end(),make_pair(l,0LL));
        int ans=it->second-it1->second+1;
        cout<<ans<<' ';
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