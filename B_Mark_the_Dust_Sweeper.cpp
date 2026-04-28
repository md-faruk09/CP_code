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
    vll a(n);fr(n)cin>>a[i];
    int k=0;
    while(k<n){
        if(a[k]!=0)break;
        k++;
    }
    int ans=0;
    for(int i=k;i<n-1 ;i++){
        if(a[i]==0)ans++;
        else ans+=a[i];
    }
    cout<<ans<<nl;

}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}