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

void solve() {
    string s;cin>>s;
    int n=s.size();
    string k;
    for (int i = 0;i<=n;i++) {
        if (i)k="("+k+")";
        string z=k;
        while(z.size()!=2*n)z="()"+z;
        bool ok = true;
        for (int p = 0; p < n; p++) {
            if (z.substr(p,n)==s) {
                ok = false;
                break;
            }
        }
        if (ok){
            cy;
            cout<<z<<nl;
            return;
        }
    }
    cn;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}