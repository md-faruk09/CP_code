#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(), a.end());
    int ans=0;
    for(int i=1; i<n; i++){
        int lo = l-a[i];
        int hi = r-a[i];
        auto it1 = lower_bound(a.begin(), a.begin()+i, lo);
        auto it2 = upper_bound(a.begin(), a.begin()+i, hi);
        int total = it2-it1;
        ans+=total;
    }
    cout<<ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}