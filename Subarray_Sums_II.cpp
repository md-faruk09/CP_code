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
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    vector<int> pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=a[i-1]+pre[i-1];
    }
    map<int,int> mp;
    int cnt=0;
    for(auto i:pre){
        cnt+=mp[i-k];
        mp[i]++;
    }
    cout<<cnt<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
   // cin>>t;
    while(t--){solve();}
    return 0;
}