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


void solve(){
    int n;cin>>n;
    vector<int> a(n);
    int sum=0;
    for(auto &i:a){cin>>i;sum|=i;}
    // cout<<sum<<nl;
    int ans=n;
    int s=0;
    for(int i=0;i<n;i++){
        s|=a[i];
        if(s==sum){
            ans--;
            s=0;
        }
    
    }
    cout<<ans;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}