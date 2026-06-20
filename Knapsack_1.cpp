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
    vector<int> dp(k+1,-1);
    dp[0]=0;
    for(auto &[x,y]:a){
        for(int i=k;i>=0;i--){
            if(dp[i]==-1 || i+x>k)continue;
            dp[i+x]=max(dp[i+x],dp[i]+y);
        //     if(i+x<=k)cout<<i+x<<' '<<dp[i+x]<<'\n';
        }
    }
    //for(auto x:dp)cout<<x<<' ';nf;
    cout<<*max_element(dp.begin(),dp.end())<<'\n';
   

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}