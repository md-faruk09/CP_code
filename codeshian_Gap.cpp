#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N) for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    int cnt = 0;
    string x;
    while (ss >> x) cnt++;
    cout << cnt<<nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}