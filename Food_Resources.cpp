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
bool parbe(int day,vll &a,int p ){
    int parb=0;
    for(int i=0;i<(int)a.size();i++){
        int d=a[i]/day;
        parb+=d;
    } 
    return (parb>=p);
}
void solve(){
    int n,p;cin>>n>>p;
    vll a(n);fr(n)cin>>a[i];
    int l=1,r=*max_element(all(a)),day=0;
    int ans=0;
    while(l<=r){

        day=(l+r)/2;
        cout<<day<< ';' ;
        if(parbe(day,a,p)){
            l=day+1;
            ans=day;
        }else r=day-1;
        cout<<l<<' '<<r<<nl;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}