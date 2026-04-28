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

void solve(){
    //Prime Factorization using SQRT(n) loop for all "numbers" not more than sqrt(n)
    int n;cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i>0)continue;
        int x=0;
        while(n%i==0){
            x++;
            n/=i;
        }
        cout<<i<<' '<<x<<nl;
    }
    if(n>1)cout<<n<<' '<<1<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}