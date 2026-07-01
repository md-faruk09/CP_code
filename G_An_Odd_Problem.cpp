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
    int n,m,k;cin>>n>>m>>k;
    if(k<=n){cout<<k<<nl;return;}
    if(k==0){cout<<0<<nl;return;}
    int nc=ceil((double)k/n);
    if(nc*nc==k && m==nc){cout<<0<<nl;return;}
    if(nc&1) {
        if((k-(n-1)*nc)&1){cout<<n<<nl;return;}
        cout<<n-1<<nl;
        return;
    }
    if(nc+1<=m){
        if((k-((n-1)*(nc-1)))&1){cout<<n<<nl;return;}
        cout<<n-1<<nl;return;
    }
    cout<<((nc*n)-k)<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}