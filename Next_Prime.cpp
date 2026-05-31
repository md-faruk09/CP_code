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
const int N=1e6+7;
vll prime;
vector<bool> isprime(N,true);
void harmoinc(){
    for(int i=2 ;i*i<N;i++){
        if(isprime[i]){
            for(int j=i+i; j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
}
void solve(){
    int n;cin>>n;

}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}