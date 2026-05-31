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
    vector<pair<int,int>> a(n);
    fr(n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    reverse(all(a));
    vll ans(n,0);
    multiset<pair<int,int>> ml;
    for(int i=0;i<n;i++){
        while( ml.upper_bound(a[i])!=ml.end()){
            // if(ml.lower_bound(a[i])->second==ml.upper_bound(a[i])->second)ml.erase(ml.upper_bound(a[i]));
            ans[ml.upper_bound(a[i])->second-1]=a[i].second;
            ml.erase(ml.upper_bound(a[i]));
        }
        ml.insert(a[i]);
    }
    frg(x,ans)cout<<x<<' ';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}
