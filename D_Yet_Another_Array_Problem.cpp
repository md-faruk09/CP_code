#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int gc=0;
    for(auto i:a)gc=__gcd(gc,i);
   // if(gc==1){cout<<2<<nl;return;}
    for(int i=2;i<1e5;i++){
        if(i%2==0 && i%3==0 && i%5==0  && i%7==0 && i%11==0 && i%13==0)cout<<i<<' ';
    }

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}