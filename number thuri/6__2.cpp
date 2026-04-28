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
// comone number of divisor
void solve(){
    int a,b;cin>>a>>b;
    int n=__gcd(a,b);
    int nod=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i!=0)nod+=2;
            else nod++;
        }
    }
    cout<<nod<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}