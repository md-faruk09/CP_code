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
    int n;cin>>n;
    map<int,int> cnt;
    for (int i = 0;i<n; i++) {
        int x;cin>>x;
        cnt[x]++;
    }
    int m=0;
    for (auto [a,b]:cnt) {
        m =max(m, b);
    }
    int k=0;
    while((m<<k)<n) {
        k++;
    }
    cout<<k+ n-m <<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}