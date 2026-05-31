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
    string s,t;cin>>s>>t;
    int l=0,r=n;
    for(int i=0;i<n;i++){
        if(s[i]==t[i])l++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]==t[i])r--;
        else break;
    }
    if(r<l){cout<<0<<nl;return;}
    
    int ans=0;
    int cs=0,ct=0;
    for(int i=l;i<r;i++){
        if(s[i]=='1')cs++;
        if(t[i]=='1')ct++;
        if(t[i]=='1' &&(cs!=ct || s[i]=='0') )ans++;
    }
    if(cs==ct){cout<<ans<<nl;return;}
    cout<<-1<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}