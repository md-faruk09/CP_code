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
    int n,k;cin>>n>>k;
    int sum=0;
    vector<int> a(n);
    for(auto &i:a){cin>>i;sum+=i;}
    // cout<<sum<<nl;
    int ans=0;
    for(int i=0 ;i<n;i++){
        for(int j=i+1;j<n;j++){
            int s=sum;
            int ss=(a[i]+a[j]);
            s-=(a[i]+a[j]);
            s/=2;
            if((ss+s)>k)ans++;

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