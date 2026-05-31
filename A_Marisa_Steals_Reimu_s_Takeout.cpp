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
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    int ans=0;
    vll b;
    int sum=0;
    vll v(2);
    for(int i=0;i<n;i++){
        if(a[i]%3==0)ans++;
        else if(a[i]==2)v[0]=v[0]+(int)1;
        else v[1]=v[1]+1;
    
    }
    sort(all(v));
    ans+=v[0];
    ans+=((v[1]-v[0])/3);
   
    cout<<ans<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}