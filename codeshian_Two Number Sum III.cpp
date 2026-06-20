#include <bits/stdc++.h>
using namespace std;


void solve(){
    string a,b;cin>>a>>b;
    if(a=="0" && b=="0"){cout<<0;return;}
    string s="";
    int n=abs((int)(a.size()-b.size()));
    for(int i=0;i<n;i++){
        s+="0";
    }
    if(a.size()> b.size())b=s+b;
    else a=s+a;
    //cout<<a<<' '<<b;
    int yy=0;
    string ans="";
    for(int i=a.size()-1;i>=0;i--){
        int ax=a[i]-'0';
        int bx=b[i]-'0';
        int xx=ax+bx+yy;
        ans+=to_string(xx%10);
        yy=xx/10;
    
    }
    if(yy)ans+=to_string(yy);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='0' && i==ans.size()-1){cout<<0;return;}
        if(ans[i]=='0')continue;
        for( ;i<ans.size();i++)
        cout<<ans[i];
        return;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}