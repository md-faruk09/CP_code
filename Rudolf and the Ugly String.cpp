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
    string s;cin>>s;
    
    deque<char> dq,x,y;
    for(auto i:{'m','a','p'})x.push_back(i);
    for(auto i:{'p','i','e'})y.push_back(i);
    int ans=0;
    if(x==y)cout<<9<<nl;
    for(int i=0;i<=s.size();i++){
        if(dq.size()==3){
            if(dq==x || dq==y){
                ans++;
                dq.erase(dq.begin(),dq.end());
            }
        }
        if(dq.size()>=3)dq.pop_front();
        dq.push_back(s[i]);
    }
    cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}