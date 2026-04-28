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

void solve(){
    int n;cin>>n;
    vll a(n),b(n);
    fr(n)cin>>a[i];
    fr(n)cin>>b[i];
    if(n%2==0){
        int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        fr(n){
            if(i&1)cnt1+=a[i],cnt3+=b[i];
            else cnt2+=a[i],cnt4+=b[i];
        }
        int ans=max(cnt1+cnt4,cnt3+cnt2);
        cout<<ans<<nl;
    }
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}