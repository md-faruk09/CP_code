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

//Prime Factorization using SQRT(n) loop for all "Primes" not more than sqrt(n)

const int N=1e6+5;
vll prime;
vector<bool>isprime(N,true);
void sieve(){
    for(int i=2;i*i<N;i+=2){
        if(isprime[i]==false)continue;
        for(int j=i*i;j<N;j+=i){
            isprime[j]=false;
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2){
        if(isprime[i]==true)prime.push_back(i);
    }
}
void solve(){
    
    int n;cin>>n;
    for(auto p:prime){
        if(p*p>n)break;
        if(n%p>0)continue;
        int x=0;
        while(n%p==0){
            x++;
            n/=p;
        }
        cout<<p<<' '<<x<<nl;
    }
    if(n>1) cout<<n<<' '<<1<<nl;
    
}
int32_t main() {
    fastio;
    sieve();
    int t=1;
    while(t--)solve();
    return 0;
}