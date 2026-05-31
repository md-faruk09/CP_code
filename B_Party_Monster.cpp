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
    int n;
    string s;cin>>n>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')cnt1++;
        else cnt2++;
    }
    if(cnt1!=cnt2){
        cn;
        return;
    }
    // stack<char> st;
    // int cnt=1;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='(')st.push('(');
    //     else if(!st.empty() && st.top()=='(') st.pop();
    //     else {
    //         if(!cnt){
    //             cn;
    //             return;
    //         }
    //         cnt--;
    //         // if(!st.empty())st.pop();
            
    //     }
    // }
    cy;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}