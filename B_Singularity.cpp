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
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    while(!a.empty() && a.back()==1)a.pop_back();
    n=a.size();
    int r=0;
    while(r<n && a[r]==1)r++;
    if(r>=n){cout<<0<<nl;return;}
    set<int> st;
    for(int i=r;i<n;i++){
        st.insert(a[i]);
    }
    if(st.size()==1)cout<<1<<nl;
    else if(st.size()>1)cout<<2<<nl;
    else cout<<0<<nl;

    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}
