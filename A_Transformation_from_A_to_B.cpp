#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int a,b;cin>>a>>b;
    vector<int>ans;
    ans.push_back(b);
    while(b>a){
        if(b%10==1)b/=10;
        else if(b&1){cn;return;}
        else b/=2;
        ans.push_back(b);
    }
    reverse(all(ans));
    if(ans.front()!=a){cn;return;}
    cy;
    cout<<ans.size()<<'\n';
    for(auto i:ans)cout<<i<<' ';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}