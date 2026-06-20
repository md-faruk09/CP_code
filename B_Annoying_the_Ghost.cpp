#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    if(*(max_element(all(a)))>*(max_element(all(b)))){cout<<-1;return;}
    int ans=0,cnt=0,ans1=0;
    for(int i=0;i<n-1;i++){
        bool ok=false;
        for(int j=i+1;j<n;j++){
            if(b[i]>=a[i]){ok=true;break;}
            if(b[i]>=a[j]){
                cnt+=j-i;
                rotate(a.begin()+i,a.begin()+j,a.begin()+j+1);
                ok=true;
                break;
            }
        }
        if(!ok){cout<<-1;return;}
       
    }
    cout<<cnt;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}