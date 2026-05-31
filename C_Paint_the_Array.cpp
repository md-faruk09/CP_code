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
    int n; cin>>n;
    vll a(n);fr(n)cin>>a[i];
    int  ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        if(i&1)ans2=__gcd(a[i],ans2);
        else ans1=__gcd(a[i],ans1);
    }
    bool ok=false;
    for(int i=0;i<n;i+=2){
        if(a[i]%ans2==0){
            ok=true;
            break;
        }
    }
    if(!ok){
        cout<<ans2<<nl;
        return;
    }
    for(int i=1;i<n;i+=2){
        if(a[i]%ans1==0){
            cout<<0<<nl;
            return;
        }
    }
    cout<<ans1<<nl;

}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}