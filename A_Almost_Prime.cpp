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
const int N=1e7+2;
vector<bool> isprime(N,true);
vll prime;

void sieve(){
    for(int i=3;i*i<N;i+=2){
        if(isprime[i]){
            for(int j=3*i;j<N;j+=2*i){
                isprime[j]=false;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2){
        if(isprime[i])prime.push_back(i);
    }
}
vll a_prime(N);
vll almost_prime(N);
vll pre;
void Almost_prime(){
    frg(x,prime){
        for(int i=x; i<N ;i+=x){
            almost_prime[i]++;
        }
    }
    for(int i=2;i<N ;i++){
        if(almost_prime[i]==2)a_prime[i]=a_prime[i-1]+1;
        else a_prime[i]=a_prime[i-1];
    }
    
}


void solve(){
    int n;cin>>n;
    cout<<a_prime[n]<<nl;
}
int32_t main() {
    fastio;
    sieve();
    Almost_prime();
    int t=1;
    while(t--)solve();
    return 0;
}