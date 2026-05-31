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
    vll a(n);fr(n)cin>>a[i];
    vector<bool> isok(n,true);
    vll b,c,d;
    for(int x=0;x<n ;x++){
        if(a[x]%2!=0 && a[x]%3!=0){
            //cout<<a[x]<<' ';
            b.push_back(a[x]);
        }
    }
    int cnt2=0,cnt3=0;
    for(int x=0;x<n;x++){
        if(isok[x] && a[x]%3!=0 && a[x]%2==0)c.push_back(a[x]),isok[x]=false;
        else if(isok[x] && a[x]%2!=0 && a[x]%3==0)d.push_back(a[x]),isok[x]=false;
    }
    int i=0,j=0,k=0;
    for(int x=0;x<n;){
        
        for(;i<b.size();i++){
            cout<<b[i]<<' ';
            x++;
            break;
        }
        for(;j<c.size();j++){
            cout<<c[j]<<' ';
            x++;
            break;
        }
        for(;k<d.size();k++){
            cout<<d[k]<<' ';
            x++;
            break;
        }

    }
    for(int i=0;i<n;i++){
        if(isok[i])cout<<a[i]<<' ';
    }
    nf;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}