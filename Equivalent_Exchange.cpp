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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int kk=-k;
    int sum=0;
    int r=0,b=0;
    int mx=LLONG_MIN;
    for(auto i:a){
        sum+=i;
        mx=max(mx,sum);
        if(sum<kk || sum>k){cn;return;}

    }
    r=k-mx;
    // if(sum>0){cn;return;}
    // b=k-r;
    //cout<<r<<nl;
    for(auto i:a){
        r+=i;
        if(r<0 || r>k){cn;return;}
    }
    cy;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}