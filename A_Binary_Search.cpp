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
    vll a(n);fr(n)cin>>a[i];
    fr(m){
        int x;cin>>x;
        bool ok=false;
        if(x<a[0] || x>a[n-1]){
            cn;
            continue;
        }
        int l=0,r=n-1,mid;
        while(l<=r){
            mid=(r+l)/2;
            if(a[mid]==x){
                cy;
                ok=true;
                break;
            }else if(a[mid]>x){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(!ok)cn;

        
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}