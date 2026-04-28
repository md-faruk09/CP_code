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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    map<int,int> mp;
    bool flag=false;
    for(int x : v) {
        mp[x]++;
        if(x>1) flag=true;
    }
    if(mp[0]==n){
        cout<<1<<nl;
    }
    else if(mp[0]<=(n+1)/2){
        cout<<0<<nl;
    }
    else if(flag){
        cout<<1<<nl;
    }
    else{
        cout<<2<<nl;
    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}