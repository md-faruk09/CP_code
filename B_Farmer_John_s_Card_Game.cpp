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
    int n,m;cin>>n>>m;
    vector<pair<int,int>> a[n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin>>x;
            a->push_back({x,i});
        }
    }
    fr(n){
        sort(all(a[i]));
        

    }
    //frg(x,a[0])cout<<x.first<<"-->"<<x.second<<nl;nf;
    for(int i=0;i<n*m-1;i++){
       // cout<<a[0][i].second<<' ';
       if( n!=1 && a[0][i].second==a[0][i+1].second){
          cout<<-1<<nl;
          return;
        }
    }
    vll ans(n);
    int k=0;
        frg(x,a[0]){
            if(k>=n)break;
            ans[k]=x.second+1;
            k++;
            
        }

        frg(x,ans)cout<<x<<' ';nf;

    // }

    

}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}