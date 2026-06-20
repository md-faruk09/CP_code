#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    string s;cin>>s;
    map<char,int> freq;
    int l=0,ans=LLONG_MAX;
    for(int r=0;r<(int)s.size();r++){
        freq[s[r]]++;
        while((int)freq.size()>=3){
            freq[s[l]]--;
            if(freq[s[l]]==0)freq.erase(s[l]);
            ans=min(ans,r-l+1);
            l++;
        }
    }
    if(ans==LLONG_MAX)ans=0;
    cout<<ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}