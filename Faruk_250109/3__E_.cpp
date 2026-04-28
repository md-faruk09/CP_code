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
    vector<int> a(n+1);
    bool ok=true;
    int mx=-1e9;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0)ok=false;
        mx=max(mx,a[i]);
    }
    vector<int> pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1]+a[i];
    }
    int r=1;
    map<int,int> mp;
    int ans=0;
    mp[pre[0]];
    while(r<=n){
       ans=max(ans,(pre[r]-(mp.begin())->first));
        mp[pre[r]];
        r++;
    }
    if(ok && ans==0)ans=mx;
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}