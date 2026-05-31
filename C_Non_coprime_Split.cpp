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
const int N=1e7+1;
vll spf(N);
vector<bool>isprime(N,true);
void ss(){
    for(int i=1;i<N;i++)spf[i]=i;
    for(int i=2;i<N;i+=2){
        spf[i]=2;
        isprime[i]=false;
    }
}
void sieve(){
    for(int i=3;i*i<N;i+=2){
        if(isprime[i]==false)continue;
        for(int j=i*i;j<N;j+=i+i){
            if(spf[j]==j)spf[j]=i;
            isprime[j]=false;
        }
    }
}
void solve(){
    int l,r;cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(spf[i]!=i){
            cout<<spf[i]<<' '<<i-(spf[i])<<nl;
            return;
        }
    }
    cout<<-1<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ss();sieve();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}