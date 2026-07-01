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
    int ma=0,mb=0,cnt=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0){
            ma=max(ma,cnt);
            cnt=0;
        }else cnt++;
    }
    ma=max(ma,cnt);
    cnt=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0){
            mb=max(mb,cnt);
            cnt=0;
        }else cnt++;
    }
     mb=max(mb,cnt);
    if(ma<mb)cout<<"Addy\n";
    else if(ma==mb)cout<<"Draw\n";
    else cout<<"Om\n";
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}