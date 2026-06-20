#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
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
    vector<pair<int,int>>a(n+1);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[i].first=a[i-1].first+x;
        a[i].second=i;
    } 
    //for(auto [x,y]:a)cout<<x<<" --> "<<y<<nl;
    int m;cin>>m;
    while(m--){
        int q;cin>>q;
        auto it=lower_bound(a.begin(),a.end(),make_pair(q,0LL));
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