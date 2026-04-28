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

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    vll fre(n+1,0);
    fr(n){
        fre[a[i]]++;
    }
    vll x(n+1,0);
    int cnt=0;
    for(int i=0;i<=n;i++){
        if(fre[i]>0)cnt++;
        x[i]=cnt;
    }
    vll ans(n+1,0);
    for(int i=0;i<=n;i++){
        int d =(i==0)?0:(i-x[i-1]);
        ans[i]=max(d,fre[i]);
    }
    for(int i=0;i<=n;i++){
        cout<<ans[i]<<(i==n?'\n':' ');
    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}