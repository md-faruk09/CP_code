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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int> dp(n+1,LLONG_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=min(dp[i],(int)(dp[i-1]+abs(a[i-1]-a[i])));
        if(i==1)continue;
        dp[i]=min(dp[i],(int)(dp[i-2]+ abs(a[i-2]-a[i])));
    }
    cout<<dp[n-1]<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}