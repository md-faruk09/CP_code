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
const int N=1e6+5;
vll prime,spf(N);
vector<bool>isprime(N,true);
void sieve(){
    for(int i=0;i<N;i++)spf[i]=i;
    for(int i=2;i*i<N ;i++){
        if(isprime[i]==false)continue;
        for(int j=i*i;j<N;j+=i){
            isprime[j]=false;
            if(spf[j]==j)spf[j]=i;
        }
    }
    for(int i=2;i<N;i++){
        if(isprime[i]==true)prime.push_back(i);
    }
}
void solve(){
   // vll a;
    int n;cin>>n;
    while(n>1){
        int x=n;
        int cnt=0;
        while(n%spf[x]==0){
            cnt++;
          //  a.push_back(spf[x]);
            n/=spf[x];
        }
        cout<<spf[x]<<' '<<cnt<<nl;
    }

   // nf;nf;
  //  frg(val,a)cout<<val<<' ';nf;
    
}
int32_t main() {
    fastio;
    sieve();
    int t=1;
    while(t--)solve();
    return 0;
}