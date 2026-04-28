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
    vector<pair<int ,int>>a;
    vll v;
    v.push_back(6);
    fr(n){
        int x,y,z;cin>>x>>y>>z;
        a.push_back({x,i+1});
        a.push_back({y,i+1});
        a.push_back({z,i+1});
    }
    sort(all(a));
    map<int,int>mp;
    int l=0,r=0,ans=a.rbegin()->first-a.begin()->first;
    while(r<a.size()){
        int rr=( a.begin()+r)->second;
        mp[rr]++;
        if(mp.size()==n && r-l+1>=n){
            while(mp.size()==n && r-l+1>=n){
                ans=min(((a.begin()+r)->first)-((a.begin()+l)->first),ans);
                int ll=(a.begin()+l)->second;
                mp[ll]--;
                if(mp[ll]==0)  mp.erase(ll);
                l++;
            }
        }
        r++;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}