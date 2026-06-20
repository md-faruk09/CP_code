#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b;cin>>a>>b;
    if(a*9==b*16)cout<<"Yes";
    else cout<<"No";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}