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
    int even=0,odd=0;
    vll a(n);
    int sum=0;
    fr(n){
        cin>>a[i];
        sum+=a[i];
        if(a[i]&1)odd++;
        else even++;

    }
    if(sum&1 && odd){
      cy;}
    else if(!(sum&1) && even){cy;}
    else cn;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}