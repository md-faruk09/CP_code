#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
int cnt=1;
bool solve(){
    int n,q;cin>>n>>q;
    if(n==0 && q==0)return true;
    cout<<"CASE# "<<cnt++<<":"<<nl;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    while(q--){
        int x;cin>>x;
        if(find(a.begin(),a.end(),x)==a.end()){cout<<x<<" not found\n";continue;}
        auto it=lower_bound(a.begin(),a.end(),x);
        int ans=it-a.begin()+1;
        cout<<x <<" found at " <<ans<<nl;
    }


    return false;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=65;
    // cin>>t;
    while(t--){
        if(solve())return 0;}
    return 0;
}