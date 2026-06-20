#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int X, M;
    cin >> X >> M;

    if(X == 1){
        cout << M;
        return;
    }

    int height = 1;
    int need = 1;

    while(height < X){
        height *= 2;
        need++;
    }

    if(M < need) cout << 0;
    else cout << 1 + (M - need);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--){
        solve();
        cout << nl;
    }

    return 0;
}