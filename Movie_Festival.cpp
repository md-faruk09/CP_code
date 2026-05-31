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

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second<b.second;
}
void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v;
    fr(n){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    sort(all(v),cmp);
    int ans=0;
    int ans1=0;
    frg(x,v){
        if(x.first>=ans1){
            ans++;
            ans1=x.second;
        }
    }
    cout<<ans<<nl;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}