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
//a=1
//b=2
//c=4294967295
//d=?
void solve(){
    int a=1,b=2;
    int c=4294967295;
    int d=4294967295;
    int n;cin>>n;
    if(n==0){
        cout<<6<<' '<<4<<" "<<3<<' '<<7<<nl;
        return;
    }
    if(n==4294967295){
        cout<<1<<' '<<2<<' '<<4<<' '<<4294967291<<nl;
        return; 

    }
      for(int i=31;i>=0;i--){
        if((n>>i)&1){
            c=(c&(~(1<<i)));

        }
    }
    // for(int i=31;i>=0;i--){
    //     cout<<((c>>i)&1);
    // }nf;
    if(a==c)a*=4;
    else if(b==c)b*=2;
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<nl;

    //((a&b)∣c)⊕d=N
    // cout<<(((1&2)|c)^d)<<nl;
    
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}