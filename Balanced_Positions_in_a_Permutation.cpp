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
    int n;cin>>n ;
    vll a(n);fr(n)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int l=0,r=0;
        for(int j=0;j<i;j++){
            if(a[i]>a[j])l++;
        }
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])r++;
        }
        if(l==r)ans++;
    }
    cout<<ans<<nl; 
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}