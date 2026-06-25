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
    int n,l,r;cin>>n>>l>>r;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int aa=accumulate(a.begin(),a.begin()+l-1,0LL);
    int b=accumulate(a.begin()+r,a.end(),0LL);
    cout<<max(aa,b)<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}