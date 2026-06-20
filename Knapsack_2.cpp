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
    vector<pair<int,int>> a(n);
    for(auto &[x,y]:a)cin>>x>>y;
    // for(auto &[x,y]:a)cout<<x<<' '<<y<<nl;
    vector<int> dp(n*1000+2,LLONG_MAX);
    dp[0]=0;
    for(auto &[x,y]:a){
        for(int i=n*1000;i>=0;i--){
            if(dp[i]==LLONG_MAX || i+y>n*1000)continue;
            dp[i+y]=min(dp[i+y],dp[i]+x);
       
        }
    }
   // for(int i=0;i<n*1000+1;i++)if(dp[i]!=LLONG_MAX)cout<<dp[i]<<' '<<i<<nl;nf;
    for(int i=n*1000;i>=0;i--){
        if(dp[i]<=k){
            cout<<i<<nl;
            return;
        }

    }
   
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}