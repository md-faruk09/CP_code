#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e6+1;
vector<int> d(N);
void hamonic(int n){
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j+=i){
            d[j]+=1;
        }
    }
}
int cnt(int l,int r,int k){
    int cntt=0;
    for(int i=l;i<=r;i++){
        if(d[i]==k)cntt++;
    }
    return cntt;
}
void solve(){
    int n;cin>>n;
    hamonic(n);
    int q;cin>>q;
    while(q--){
        int l,r,k;cin>>l>>r>>k;
        cout<<cnt(l,--r,k)<<nl;

    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}