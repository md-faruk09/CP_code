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
bool ok(int m,vll b a,int n,int c){
    int l=0,r=1,cnt=1;
    while(r<n){
        if(m<=a[r]-a[l]){
            l=r;
            cnt++;
        }else{
            r++;
        }
    }
    return  (cnt>=c);
}
void solve(){
    int n,c;cin>>n>>c;
    vll a(n);fr(n)cin>>a[i];
    sort(all(a));
    int l=0,r=a[n-1];
    int ans=0;
    while(l<=r){
        int m=(l+r)/2;
        if(ok(m,a,n,c))l=m+1;
        else r=m-1;
        ans=m;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}