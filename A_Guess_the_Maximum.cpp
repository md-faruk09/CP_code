#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N) for(int i = 0; i < N; i++)
#define frg(x,a) for(auto x : a)
#define vll vector<long long>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve(){
    int n;cin >> n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int mn = 1e18;
    for(int i = 1; i < n; i++){
        mn = min(mn, max(v[i], v[i - 1]));
    }
    cout << mn - 1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << nl;
    }

    return 0;
}