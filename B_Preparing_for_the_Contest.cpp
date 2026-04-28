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
#define pb push_back

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    int n,k;
    cin >> n >> k;
 
    vector<int> ans;
    ans.pb(n);
    n--;
    for(int i=0; i<k; i++){
        ans.pb(n--); 
    }
    reverse(all(ans));
    while(n){
        ans.pb(n--);
    }
 
    for(auto it: ans) cout << it << " "; cout << endl;
 
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}