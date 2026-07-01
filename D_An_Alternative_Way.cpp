#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    int k=n;
    for(int i=n-1;i>=0;i--){
        if(a[i]>b[i]){k=i+1;break;}
    }
    //cout<<*(a.begin()+k)<<nl;nf;

    int aa=accumulate(a.begin(),a.begin()+k,0LL);
    int bb=accumulate(b.begin(),b.begin()+k,0LL);
    if(aa>bb)cn;
    else cy;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}