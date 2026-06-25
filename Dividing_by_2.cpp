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
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    map<int,int>mp;
    for(auto i:a)mp[i]++;
    if(mp.size()==1){cout<<0<<nl;return;}
    sort(rall(a));
    vector<int> v(__lg(a[0])+1);
    for(int i=0;i<n;i++){
        for(int j=__lg(a[0]) ;j>=0;j--){
            v[j]+=((a[i]>>j)&1);
        }
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)cnt++;
        else break;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(__lg(a[i])-cnt);
    }
    cout<<ans<<nl;
    // for(auto i:v)cout<<i<<' ';
    // nf;

    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}