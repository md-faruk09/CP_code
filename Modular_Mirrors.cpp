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


void solve(){
    int n,m;cin>>n>>m;
    if(n%6!=2 && n%6!=5){cout<<-1<<nl;return;}
    vll a;
    for(int i=0;i<n/2;i++){
        if(!(i&1))a.push_back(1),a.push_back(1),a.push_back(0);
        else{
            a.push_back(m-1),a.push_back(m-1),a.push_back(0);
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<' ';nf;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}