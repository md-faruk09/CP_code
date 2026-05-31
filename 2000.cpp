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
    map<string,string>mp;
    map<string,string>m;
    while(n--){
        string a,b;cin>>a>>b;
        if(m.count(a)){
            mp[m[a]]=b;
            m[b]=m[a];
            m.erase(a);

        }else{
            mp[a]=b;
            m[b]=a;
        }
    }
    for(auto [x,y]:mp)cout<<x<<' '<<y<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}