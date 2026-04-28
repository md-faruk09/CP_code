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
    string s;cin>>s;
    if(n%2==1 && s[n/2]=='?'){
        cn;
        return;
    }
    for(int i=0,j=n-1;i<n/2;i++,j--){
       
        if(s[i]==s[j] && s[i]=='?'){
            cn;
            return;
        }
        if(s[i]!='?' && s[j]!='?' && s[i]!=s[j]){
            cn;
            return;
        }
    }
    cy;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}