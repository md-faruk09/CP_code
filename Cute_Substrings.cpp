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

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int ans = 0;
    for (int l=0;l<n;l++) {
        for (int r=l;r<n;r++) {
            int len =r-l+1;
            if (len%2==0) continue;
            bool cute = true;
            for (int k=0;k<len;k++){
                char c=s[l+k];
                if (k%2==0){ 
                    if (c!='u'&&c!='o') {
                        cute =false;
                        break;
                    }
                } else {
                    if (c!='w') {
                        cute =false;
                        break;
                    }
                }
            }
            if (cute)ans=max(ans,len);
        }
    }
    cout<<ans<<nl;
    
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}