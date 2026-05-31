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
int lcm(int a,int b){
    return((a*b)/__gcd(a,b));
}
void solve(){
    int n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    int ans=0;
    ans+=(n/a)*p+(n/b)*q;
    if(p>=q)ans-=(n/(lcm(a,b)))*q;
    else ans-=(n/(lcm(a,b)))*p;
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}