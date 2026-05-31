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
    int n;cin>>n;
    vll a(n+1);fr(n)cin>>a[i+1];
    vll ans;
    bool ok=false,okk=true;
    for(int i=n;i>0;i--){
        if(a[i]>0 && !ok){
            ans.push_back(i);
            ok=true;
            okk=false;
        }else if(a[i]<0 && !okk ){
            ans.push_back(i);
            ok=false;
            okk=true;
        }
    }
    cout<<ans.size()<<nl;
    frg(x,ans)cout<<x<<' ';nf;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}