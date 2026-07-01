#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    for(auto i:a)cout<<i<<' ';nf;
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        auto it=lower_bound(a.begin(),a.end(),(x-1));
        auto it2=upper_bound(a.begin(),a.end(),x);
        cout<<*it<<' ';
        if(it2==a.end()){cout<<'X'<<'\n';continue;}
        cout<<*it2<<nl;
    }
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}