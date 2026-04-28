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
    int n,l;cin>>n>>l;
    vll a(n);fr(n)cin>>a[i];
    sort(all(a));
    double mx=0.00;
    if(a[0]!=0)mx=(double)a[0];
    if(a[n-1]!=l)mx=max(mx,(double)(l-a[n-1]));
    for(int i=1;i<n;i++){
        mx=max(mx,(double)(a[i]-a[i-1])/2.0);
    }
    cout<<fixed<<setprecision(10)<<mx<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}