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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    map<int,int> mp;
    int l=0;
    int ans=0;
    for(int r=0;r<n;r++){
        while(mp[a[r]])mp[a[l++]]=0;
        mp[a[r]]++;
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}