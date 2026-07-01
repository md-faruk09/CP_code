#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
int lcm(int a,int b){
    return((a*b)/__gcd(a,b));
}

void solve(){
    int n;cin>>n;
    int cnt=0;
    vector<pair<int,pair<int,int>>> a(n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(__gcd(lcm(i,j),lcm(j,k))==__gcd(i,k)){
                    cout<<i<<' '<<j<<' '<<k<<nl;
                    
                    cnt++;
                }
            }
        }
    }
    // cout<<cnt<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}