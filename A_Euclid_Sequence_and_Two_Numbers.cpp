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
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    sort(rall(a));
    if(n==2){
        cout<<a[0]<<" "<<a[1]<<nl;
        return;
    }
    // int x=a[0]% a[1];
    // if(x==a[2]){
        for(int i=2;i<n;i++){
            if(a[i-2]%a[i-1]!=a[i]){
                cout<<-1<<nl;
                return;
            }
        }
    // }
    cout<<a[0]<<' '<<a[1]<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}