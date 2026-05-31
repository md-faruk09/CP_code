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
    int n,s,m;cin>>n>>s>>m;
    vll a;
    a.push_back(0);
    fr(2*n){
        int x;cin>>x;
        a.push_back(x);
    }
    a.push_back(m);
    int ans=0;
    for(int i=1;i<a.size();i+=2){
        ans=max(ans,a[i]-a[i-1]);
    }
    if(ans>=s)cy;
    else cn;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}