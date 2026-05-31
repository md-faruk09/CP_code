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
    multiset<int>ml;
    int mx=-1,l=0,r=0;
    while(r<n && l<n){
        while(ml.find(a[r])!=ml.end()){
            ml.erase(a[l++]);
        }
        ml.insert(a[r]);
        mx=max(mx,(int)(r-l+1));
        r++;
        // frg(x,ml)cout<<x<<" ";nf;
        // cout<<l<<' '<<r<<"   "<<mx<<nl;nf;
    }
    cout<<mx<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}