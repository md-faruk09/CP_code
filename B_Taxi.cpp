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
    int n;cin>>n;
    map<int,int>mp;
    fr(n){
        int x;cin>>x;
        mp[x]++;
    }
    int ans=0;
    ans+=mp[3];
    int boy=0;
    if(mp[1]>mp[3]) boy=mp[4]*4+mp[2]*2+mp[1]-mp[3];
    else boy=mp[4]*4+mp[2]*2;
    //cout<<boy<<nl;
    ans+=ceil(1.0*boy/4.0);
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}