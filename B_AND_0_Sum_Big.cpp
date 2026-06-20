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
   int n,k;cin>>n>>k;
   cout<<bigmod(n,k);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}