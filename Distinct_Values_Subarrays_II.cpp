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
    int n,k;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int l=0,r=0;
    int ans=0;
    set<int> st;
    while(r<n){
        if(st.size()==k){
            ans+=r-l+1;
            auto it=st.find(v[l]);
            if(it!=st.end()){
                st.erase(it);
            }
            l++;
        }else if(st.size()<k){
            st.insert(v[r]);
            r++;
        }
    }
    cout<<ans<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}