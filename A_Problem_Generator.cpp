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
    string t = "ABCDEFG";
    int n,m; cin>>n>>m;
    string s; cin>>s;
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    int ans = 0;
    for(char c : t){
        ans+=max((int)0, (int)m-mp[c]);
    }
    cout<<ans<<nl;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}