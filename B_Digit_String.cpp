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


void solve(){
    string s;cin>>s;
    stack<int>st,st2;
    for(auto c:s){
        int  x=c-'0';
        if(x==2){
            if(st.empty())st.push(x);
            else if(!st.empty() && (st.top()!=3 && st.top()!=1)) st.push(x);
        }
        if(x==1 || x==3 )st.push(x);
    }
    int mn=1e8;
    mn=min(mn,(int)(s.size()-st.size()));
    for(auto c:s){
        int  x=c-'0';
        if(x==2){
           while(!st2.empty() && (st2.top()==3 || st2.top()==1)) st2.pop();
           st2.push(x);
        }
        if(x==1 || x==3 )st2.push(x);
    }
    // while(!st2.empty()){
    //     cout<<st2.top()<< ' ';
    //     st2.pop();
    // }
    // nf;nf;
     
    mn=min(mn,(int)(s.size()-st2.size()));
    int cnt1=0,cnt2=0,cnt3=0;
    bool ok1=true,ok2=true,ok3=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(ok1)cnt1++;
            else{
                ok1=true;
                cnt1=1;
            }
        }
        else if(s[i]=='3'){
            if(ok3)cnt3++;
            else{
                ok3=true;
                cnt3=1;
            }
        }
        else if(s[i]=='2'){
            if(ok2)cnt2++;
            else{
                ok2=true;
                cnt2=1;
            }
        }
        else {
            ok1=ok2=ok3=false;
        }
    }
    cout<<mn<<nl;
    

    // cout<<s.size()-st.size()<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}