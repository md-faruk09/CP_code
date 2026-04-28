
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
       ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
       ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
       ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
       ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
       ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
       ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
       ████████████████████████████████████████████████████

*/


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
  long long longestSubarray(vector<int>& a, long long k) {
    long long n=a.size();
    vector<long long> pre(n+1,0);
    for(long long i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    long long r=0,ans=0;
    map<long long ,long long> mp;  
    while(r<=n){
        if(mp.find(pre[r]-k)!=mp.end()){
            ans=max(ans,r-mp[pre[r]-k]);
        }
        if(mp.find(pre[r])==mp.end()){
          mp[pre[r]]=r;
        }
        r++;
    }
    return ans;

}
void solve(){
    vll a;
    int x;
    while(cin>>x){
        a.push_back(x);
    }
    int k=a.back();
    a.pop_back();
    int n=a.size();
    cout<<longestSubarray(a,k)<<endl;

}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}