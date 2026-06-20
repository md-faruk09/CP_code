#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int n ;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    // for(int i=0;i<30;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<=a[j+1])continue;
            int x=a[j];
            int y=a[j+1];
            a[j]=y;
            a[j+1]=x+y;
        }
    // }
    cout<<a[n-1];
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}