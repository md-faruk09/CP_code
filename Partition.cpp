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
    int n; cin>>n;
    map<int,int>mp;
    int x= 0;
    fr(n){
        int val;cin>>val;
        mp[val]++;
        x= max(x,mp[val]);
    }
    cout<<++n-x<<nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; cin >> t;
    while(t--) solve();
    return 0;
}