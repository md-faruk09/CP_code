#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto &x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    int n,k;cin>>n>>k;
    vll a(n);frg(x,a)cin>>x;
    map<int,int>mp;
    frg(x,a)mp[x]++;
    vll v;
    frg(x,mp){
        if(x.second>=k)v.push_back(x.first);
    }
    if(v.empty()){
        cout<<-1<<nl;
        return;
    }
    int l,l1,r,r1;
    l=l1=r=r1=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]-1==v[i-1]){
            r1=v[i];
            if(r1-l1>r-l){
                l=l1;
                r=r1;
            }
        }
        else{
            l1=v[i];
            r1=v[i];
        }
    }
    cout<<l<<' '<<r<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}