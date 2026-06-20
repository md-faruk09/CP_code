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
    if(a[0]==a[n-1]){
        cout<<0<<nl;
        return;
    }
    map<int,int> mp;
    bool ok=true;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>=2)ok=false;
    }
    if(ok){
        cout<<-1<<nl;
        return;
    }
    int ans=1e10;
    for(auto [f,s]:mp){
        int mm=0;
        if(s>=2){
            for(int i=0;i<n;i++){
                if(a[i]==f){
                    mm=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(a[i]==f){
                    mm+=(n-i-1);
                    break;
                }
            }
            ans=min(mm,ans);
        }
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}