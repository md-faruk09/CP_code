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
const int  N=1e6+5;
vll price(N);
vector<bool>isprime(N,true);
void sieve(){
    for(int i=2;i*i<N;i++){
        if(isprime[i]){
            for(int j=i+i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    price[1]=1;
    for(int i=2;i<N-2;i++){
        if(isprime[i])price[i]=1;
        else price[i]=2;
    }
}
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<1<<nl<<1<<nl;
        return;
    }
    if(n==2){
        cout<<1<<nl<<"1 1"<<nl;
        return;
    }
    cout<<2<<nl;
    for(int i=2;i<=n+1;i++){
        cout<<price[i]<<' ';
    }nf;    
}
int32_t main() {
    fastio;
    sieve();
    int t=1;
    while(t--)solve();
    return 0;
}