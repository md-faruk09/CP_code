#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

bool cmd(pair<int,int> a, pair<int,int> b){
    if(a.first<b.first)return true;
    else if(a.first==b.first && a.second>b.second)return true;
    else return false;
}
void solve(){
   int n;cin>>n;
   vector<pair<int,int>> a(n);
   for(auto &[i,j]:a)cin>>i>>j;
   sort(a.begin(),a.end(),cmd);
   for(auto [i,j]:a)cout<<i<<' '<<j<<nl;
   
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t=1;
   // cin>>t;
    while(t--){solve();}
    return 0;
}