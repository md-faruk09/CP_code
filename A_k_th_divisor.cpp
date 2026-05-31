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

void solve(){
    int n,k;cin>>n>>k;
    vll a;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if(i*i==n)continue;
            a.push_back(n/i);
        }
    }
    sort(all(a));
    if(a.size()<k){
        cout<<-1<<nl;
        return;
    }
    cout<<a[--k]<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}