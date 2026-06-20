#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int a,b;cin>>a>>b;
    int c=(7-max(a,b));
    // cout<<c;
    if(c==6)
        cout<<"1/1"<<endl;
    if(c==(5))
        cout<<"5/6"<<endl;
    if(c==4)
        cout<<"2/3"<<endl;
    if(c==3)
        cout<<"1/2"<<endl;
    if(c==2)
        cout<<"1/3"<<endl;
    if(c==1)
        cout<<"1/6"<<endl;
 
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}