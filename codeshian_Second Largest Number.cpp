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
    int mx=LLONG_MIN;
    vector<int> a(n);
    for(auto &i:a){cin>>i;mx=max(mx,(int)i);}
    int ans=LLONG_MIN;
    for(auto i:a)if(i!=mx)ans=max(ans,i);
    if(ans==LLONG_MIN)ans=0;
    cout<<ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}