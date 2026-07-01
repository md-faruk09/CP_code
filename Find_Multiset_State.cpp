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


void solve(){
    int n,k;cin>>n>>k;
    // multiset<int>ml;
    // fr(n){
    //     int x;cin>>x;
    //     ml.insert(x);
    // }
    // for(int i=0;i<k;i++){
    //     int x=*ml.begin()+*ml.rbegin();
    //     ml.erase(ml.begin());
    //     ml.erase(--ml.end());
    //     ml.insert(x);
    // }
    // for(auto x:ml)cout<<x<<' ';nf;

    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int sum=accumulate(a.begin(),a.begin()+k,a.back());
    if(n==k+1){cout<<sum<<nl;return;}
    vector<int> ans(a.begin()+k, a.begin()+n-1);
    for(auto i:ans)cout<<i<<' ';cout<<sum<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}