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
    string a;cin>>a;
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0')cnt++;
        else {
            if(i==cnt && cnt<3){
                ans+=cnt/2;
            }
            else {cnt--;
                ans+=cnt/3;
            }
            // if(cnt>2)ans+=ceil(1.0*cnt/4);
            cnt=0;

        }
    }
    if(n>cnt)cnt--;
    ans+=ceil(1.0*cnt/3);
    cout<<ans+count(all(a),'1')<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}