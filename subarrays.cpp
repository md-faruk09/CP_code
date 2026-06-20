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
    int n;cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    int k;cin>>k;
    deque<int> dq;
    for(int i=0;i<n;i++){
        while(!dq.empty() && a[dq.back()]<=a[i])dq.pop_back();
        dq.push_back(i);
       while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
        if(i>=k-1) cout<<a[dq.front()]<<' ';
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}