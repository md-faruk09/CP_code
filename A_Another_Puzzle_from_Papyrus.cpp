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
    int n,c;cin>>n>>c;
    vector<int> a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    vector<int > r=a;
    vector<int> rl=b;
    sort(all(rl));
    sort(all(r));
    for(int i=0;i<n;i++){
        if(r[i]<rl[i]){
            cout<<-1<<nl;
            return;
        }
    }
    r=a;
    rl=b;
    int cnt=0;
    int cnt1=LLONG_MAX;
    bool ok=true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            ok=false;
            break;
        }
    }
    if(ok){cnt1=0;
        for(int i=0;i<n;i++){
        cnt1+=a[i]-b[i];
        }
    }
    int aa=accumulate(a.begin(),a.end(),0LL);
    int bb=accumulate(b.begin(),b.end(),0LL);
    cnt=aa-bb+c;
    cout<<min(cnt,cnt1)<<nl;

    

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}