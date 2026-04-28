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
const int N=5000000+5;
vll a(N);
void divisor_sum(){
    for(int i=1;i<N;i++){
        for(int j=i+i;j<N;j+=i){
            a[j]+=i;
        }
    }
}
void solve(){
    int n;cin>>n;
    cout<<a[n]<<nl;
    
}
int32_t main() {
    fastio;
    divisor_sum();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}