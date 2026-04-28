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

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    string s;cin>>s;
    map<char,int> mp;
    for(auto ch:s) mp[ch]++;
    int cnt=0;
    for(auto x:mp)if(x.second & 1)cnt++;
    if(cnt>1)cout<<"NO\n";
    else cout<<"YES\n";
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}