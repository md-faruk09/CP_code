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
    vll a(n),pre(n+1);
    fr(n)cin>>a[i];
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    vll v(n+1);
    for(int i=1;i<=n;i++){
        v[i]=max(a[i-1],v[i-1]);
    }
    //for(int i=1;i<=n;i++)cout<<v[i]<< ' '<<pre[i]<<nl;
    int ans=0;
    for(int i=1;i<=n;i++){
        if((2*v[i])==pre[i])ans++;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}