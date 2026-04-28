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
    string s;cin>>s;
    // s.push_back(s[0]);
    // s.push_back(s[1]);
    // s.push_back(s[2]);
    s+=s.substr(0,3);
    n+=3;
    multiset<char>ml;
    int l=0,r=0;
    string x="";
    while(r<n){
        ml.insert(s[r]);
        if(3==r-l+1){
            //frg(c,ml)cout<<c;nf;
            if(ml.count('1')==2)x.push_back('1');
            else x.push_back('0');
           
            ml.erase(ml.find(s[l++]));
        }
        r++;
    }
    int cnt1=0,cnt0=0;
    for(int i=1;i<n;i++){

        if(x[i]==x[i-1] ){
            if(x[i]=='1')cnt1++;
            else cnt0++;
        }
    }
    int cnt=max(cnt1,cnt0);
    //cout<<x<<nl;
        if(cnt==0)cout<<-1<<nl;
    else cout<<cnt<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}