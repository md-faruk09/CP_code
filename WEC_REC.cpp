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
    int n,x,k;cin>>n>>x>>k;
    map<int,int>mp;
    fr(n){
        int v;cin>>v;
        mp[-v]++;
    }
    int ans=0;
    int cnt=0;
    for(auto [f,s]:mp){
        if(cnt==k)break;
        ans+=s;
        cnt++;
    }
    if(ans>=x)cout<<x<<nl;
    else cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}