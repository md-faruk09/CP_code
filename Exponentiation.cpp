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
const int mod=1e9+7;
int bigmod(int a,int b){
    if(b==0)return 1;
    if(b%2==1){
        return (a%mod*bigmod(a,b-1)%mod)%mod;
    }
    int tmp =bigmod(a,b/2)%mod;
    return (tmp*tmp)%mod;
}
void solve(){
    int a,b;cin>>a>>b;
    cout<<bigmod(a,b)<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}