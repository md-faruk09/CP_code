#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e7;
vector<int > prime;
int cnt=0;
vector<bool> isprime(N,true);
void sieve(){
    for(int i=3;i*i<N;i+=2){
        if(!isprime[i])continue;
        for(int j=i*i;j<N;j+=(i+i)){
            isprime[j]=false;
            cnt++;
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2){
        if(isprime[i])prime.push_back(i);
    }
    
}
void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++)cout<<prime[i]<<' ';
    cout<<'\n';
    cout<<cnt<<'\n';
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}