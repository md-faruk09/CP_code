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
    int n,k;cin>>n>>k;
    vll a(n);fr(n)cin>>a[i];
    vll cnt(31,n);
    for(int j=0;j<n;j++){
        for(int i=30 ;i>=0 ;i--){
            if(((a[j]>>i)&1))cnt[i]--; 
        }  
    }
    int ans1=0;

    for(int i=30;i>=0;i--){
        if(cnt[i]<=k){
            ans1+=(1<<i);
            k-=cnt[i];
        }
    }
    cout<<ans1<<nl;
   // for(int i=29;i>=0;i--)cout<<cnt[i]<<' ';nf;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}