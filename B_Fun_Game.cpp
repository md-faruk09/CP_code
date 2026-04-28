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
    int n;cin>>n;
    string s,t;cin>>s>>t;
    if(s[0]=='1'){
        cy;
        return;
    }
    int b1=1e6,b2=1e6;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            b1=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(t[i]=='1'){
            b2=i;
            break;
        }
    }
   // cout<<b1<<' '<<b2<<nl;
    if(b1<=b2)cy;
    else cn;
    // int x=0,y=0;
    // for(int i=n-1,j=0;i>=0;i--,j++){
    //     if(s[i]=='1'){
    //         x+=((1ll<<j));
    //     }

    // }
    // for(int i=n-1,j=0;i>=0;i--,j++){
    //     if(t[i]=='1'){
    //         y+=((1ll<<j));
    //     }

    // }
    // cout<<x<<' '<<y<< " --> " ;
    // cout<<__lg(x)<<' '<<__lg(y)<<nl;
    // if(__lg(x)>__lg(y))cy;
    // else cn;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}