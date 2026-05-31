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


void solve(){
    int a,b,c;cin>>a>>b>>c;
    int ans=1e18+1;
    ans=min(ans,a*b);
    ans=min(ans,(int)(ceil(a*1.0/3)*c));
    ans=min(ans,(int)((ceil(a/3)*c)+(a%3)*b));
    cout<<ans<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}