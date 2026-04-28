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
    int n,m;cin>>n>>m;
    if(n>=27){
        cout<<m<<nl;
        return;
    }
    n=(1ll<<n);
    if(n>m){
        cout<<m<<nl;
        return;
    }
    if(n==m){
        cout<<0<<nl;
        return;
    }
    int ans=0;
    string nc=to_string(m);
    for(int i=0;i<nc.size();i++){
        ans=(ans*10)+(nc[i]-'0');
        ans%=n;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}