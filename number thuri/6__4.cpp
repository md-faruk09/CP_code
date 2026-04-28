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

// sieve diye t test case ar number of divisor

const int N=1e6+5;
vll prime;
vector<bool>isprime(N,true);
void sieve(){
    for(int i=2;i*i<N;i++){
        if(isprime[i]){
            for(int j=i*i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<N;i++){
        if(isprime[i])prime.push_back(i);
    }
}
void solve(){
    
    int n;cin>>n;
    int nod=1;
    for(auto p:prime){
        if(p*p>n)break;
        int cnt=0;
        while(n%p==0){
            n/=p;
            cnt++;
        }
        nod*=(cnt+1);
    }
    if(n>1)nod*=(1+1);
    cout<<nod<<nl;
}
int32_t main() {
    fastio;
    sieve();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}