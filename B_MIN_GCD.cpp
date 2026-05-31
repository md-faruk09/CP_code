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
    map<int,int>mp;
    vll a(n);
    fr(n){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.begin()->second>1){
        cy;
        return;
    }
    int mn=mp.begin()->first;
    int ge=0;
    for(int i=0;i<n;i++){
        if(a[i]%mn==0 && a[i]!=mn){
            ge=__gcd(ge,a[i]);
        }
    }
    if(ge==mn)cy;
    else cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}