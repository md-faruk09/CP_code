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
    int n,a,k;cin>>n>>a>>k;
    int t=a+k;
    vector<int>v;
    while(n--){
        int a,b;cin>>a>>b;
        v.push_back(max(a,b));
    }
    sort(rall(v));
    //for(auto i:v)cout<<i<<' ';nf;
    cout<<accumulate(v.begin(),v.begin()+t,0LL)<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}