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
    int fact=1;
    if(n==0){cout<<1;return;};
    for(int i=1;i<=n;i++)fact*=i;
    cout<<fact;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}