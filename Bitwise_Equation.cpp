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

void solve(){
    int n;cin>>n;
    int a=1,b=2,c;
    if(n==0){
        cout<<4<<' '<<6<<' ' <<3<<' '<<7<<nl;
        return;
    }
    for(int d=3; d<N; d++){
        c=(d^n);
        if(c==a || c==b || c<=3)continue;
        cout<<a<<' '<<b<<' '<<c<<' '<<d<<nl;
        return;
    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}