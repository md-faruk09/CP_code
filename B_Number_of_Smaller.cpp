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
    int n,m;cin>>n>>m;
    vll a(n),b(m);
    fr(n)cin>>a[i];
    fr(m)cin>>b[i];
    int l=0,r=0,cnt=0;
    while(r<m){
        if(l<n && a[l]<b[r]) l++,cnt++;
        else{
            cout<<cnt<<' ';
            r++;
        }
    }
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}