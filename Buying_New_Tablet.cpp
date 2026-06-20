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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
  return uniform_int_distribution<int>(l, r)(rng);
}

void solve(){
    int n,b;cin>>n>>b;
    int mx=-1;
    while(n--){
        int w,h,p;cin>>w>>h>>p;
        if(p<=b)mx=max(mx,(h*w));
    }
    if(mx==-1)cout<<"no tablet";
    else cout<<mx;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}