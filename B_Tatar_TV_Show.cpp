#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES"
#define cn cout << "NO"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<int,int>mp;
    for(int i=0;i<k;i++){
        for(int j=i;j<n;j+=k){
            if(s[j]=='1')mp[i]++;
        }
    }
    for(auto [x,y]:mp){
        if((y%2)){cn;return;}
    }
    cy;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}