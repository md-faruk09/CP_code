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

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    int n;cin>>n;
    vll a(n),b(n),c(n);
    fr(n)cin>>a[i];
    fr(n)cin>>b[i];
    fr(n)cin>>c[i];
    vll mx(n);
    vector<pair<int,int>>p;
    fr(n){
        p.push_back({a[i]+b[i]+c[i],i});
    }
    for( auto [x,y]:p)cout<< x<<' '<<y<<nl;
    sort(rall(p));
    fr(n)mx[i]=max({a[i],b[i],c[i]});
    
    cout<<mx[p[0].second]+mx[p[1].second]+mx[p[2].second]<<nl;
    
    
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}