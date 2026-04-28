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
const int  N=32768;
vll v;
bool pal(int x){
    string a=to_string(x);
    string s=a;
    reverse(all(a));
    return s==a;

}
void precla(){
    for(int i=0 ;i<N;i++){
        if(pal(i))v.push_back(i);
    }
}
void solve(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    vll mp(100000+5);
    int ans=0;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        for(int j=0;j<v.size() ;j++){
            if(mp[(a[i]^v[j])]){
                //cout<<a[i]<<' '<<(a[i]^v[j])<<' '<<v[j]<<nl;
                ans+=mp[(a[i]^v[j])];
            }
        }
    }
    cout<<ans<<nl;
    // cout<<v.size()<<nl;
    // frg(x,v)cout<<x<<nl;
}
int32_t main() {
    fastio;
    precla();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}