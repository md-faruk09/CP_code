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


ll gcd (ll p, ll q) {
  if (q == 0) return p;
  return gcd(q, p % q);
}
 
void solve () {
  ll p, q, b;
  cin >> p >> q >> b;
 
  q /= gcd(p, q);
 
  while (true) {
    ll gc = gcd(q, b);
    if (gc == 1) break;
    while (q % gc == 0) {
      q /= gc;
    }
  }
  
  if (q == 1) {
    cout << "Finite" << '\n';
  } else {
    cout << "Infinite" << '\n';
  }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}