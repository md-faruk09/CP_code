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
bool ok(int m,int k, vll v){
    for(int i=0;i<v.size();i++){
        if(v[i]<m) k-=(m-v[i]);
    }
    return k>=0;
}
void solve(){
    int n,k;cin>>n>>k;
    vll a(n);fr(n)cin>>a[i];
    sort(all(a));
    vll v((n/2)+1);
    for(int i=(n/2),j=0;i<n;i++,j++){
        v[j]=a[i];
    }
    int l=0,r=1e10,ans=0;
    while(l<=r){
        int m=(l+r)/2;
        if(ok(m,k,v)){
            ans=m;
            l=m+1;
        }else{
            r=m-1;
        }
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}