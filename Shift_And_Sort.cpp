#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve() {
    int n;cin>>n;
    vll a(n+2);fr(n)cin>>a[i+1];
    a[0]=-1e18; 
    a[n+1]=1e18;
    vll b(n+1),v(n+1,1e18);
    for(int i=1;i<n;i++) {
        if (a[i]>a[i+1]) {
            b[i]=(a[i]-a[i+1]+1)/2;
        }
        if(i>1) v[i] = min(v[i], a[i] - a[i-1]);  
        if(i+2 <= n) v[i] = min(v[i], a[i+2] - a[i+1]);
    }
    vll x(n+1);
    bool ok = true;
    for (int i=1; i<n; ++i) {
        ll ci = a[i]-x[i]+(i>1?x[i-1]: 0);
        ll ni = a[i+1]-x[i+1]+x[i];
        if(ci <= ni) continue;
        if(x[i] > 0) {
            ok =false;
            break;
        }
        ll nd =(ci-ni+1)/2;
        ll mx =v[i];
        if (nd>mx) {
            ok = false;
            break;
        }
        x[i] = nd;
        ci = a[i]-x[i]+(i>1?x[i-1] : 0);
        ni = a[i+1]-x[i+1] + x[i];
        if (i>1) {
           ll p = a[i-1]-x[i-1]+(i>2 ? x[i-2] : 0);
            if (p > ci) {
                ok =false;
                break;
            }
       }
    }
    cout<<(ok?"Yes":"No")<<nl;
}

int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}