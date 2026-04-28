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
    deque<int>dq;
    if(n%2==0){
        cout<<n/2<<nl;
        for(int i=1;i<=3*n;i+=6){
            dq.push_back(i);
            dq.push_back(i+5);
        }
        
    }else{
    cout<<ceil(n/2.0)<<nl;
    for(int i=1;i<=3*(n-1);i+=6){
        dq.push_back(i);
        dq.push_back(i+5);
    }
    dq.push_back(n*3-2);
    dq.push_back(n*3);
    }

   sort(all(dq));
   int l=1,r=3*n;
   while(l<r){
    cout<<l<<' '<<r<<nl;
    l+=3;
    r-=3;
   }
   
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}