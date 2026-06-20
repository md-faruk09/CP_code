#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll>v(n);
    fr(n)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    vector<ll>pre(n,0);
    for(int i=0; i<n; i++){
        if(i==0){
            pre[i]=v[i];
            continue;
        }
        pre[i]=pre[i-1]+v[i];
    }
    while(q--){
        ll x;
        cin>>x;
        ll ans=-1;
        ll lo=0,hi=n-1;
        while(lo<=hi){
            ll mid = (lo+hi)/2;
            if(pre[mid]>=x){
                if(ans==-1) ans=mid+1;
                else ans=min(ans,mid+1);
                hi=mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        cout<<ans<<nl;
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}
