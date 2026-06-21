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
    unsigned int n;cin>>n;
    int cnt=0,j=0;
    for(int i=1 ;i<=n ;i++){
        if(n%i==0 && j==i-1){
            cnt++;
            j=i;
        }
        else break;
    }
    cout<<cnt<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}