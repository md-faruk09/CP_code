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
    multiset<int> ml;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ml.insert(x);
    }
    int ans=0;
    while(*ml.begin()!=*ml.rbegin()){
        int it=*ml.rbegin();
        ml.erase(ml.find(it));
        ml.insert(it/2);
        ans++;
    }
    cout<<ans<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}