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
    int n;
    cin >> n;
    vll a(n), cnt(2);
    for (int &x : a) {
        cin >> x;
        ++cnt[x & 1];
    }
    if (cnt[0] == n || cnt[1] == n) {
        cout << "0\n";
        return;
    }
    sort(all(a));
    if (a.back() % 2 == 1) {
        cout << cnt[0] << '\n';
        return;
    }
    int s = 0, k;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % 2) {
            s += a[i];
            k = i;
            for (int j = i - 1; j >= 0; j--) {
                if (a[j] % 2 == 0) {
                    s += a[j];
                }
            }
            break;
        }
    }
    int ans = cnt[0];
    for (int i = k + 1; i < n; i++) {
        if (s < a[i]) {
            ++ans;
            break;
        }
        s += a[i];
    }
    cout << ans << '\n';
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}