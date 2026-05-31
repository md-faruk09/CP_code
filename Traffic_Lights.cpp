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
    int x,n;cin>>x>>n;
    set<int>s={0,x};
    multiset<int>ml;
    fr(n){
        int val;cin>>val;
        int st=*--s.lower_bound(val);
        int ed=*s.lower_bound(val);
        if(ml.find(ed-st)!=ml.end())ml.erase(ml.find(ed-st));
        s.insert(val);
        ml.insert(abs(st-val));
        ml.insert(abs(ed-val));
        cout<<*ml.rbegin()<<' ';
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}