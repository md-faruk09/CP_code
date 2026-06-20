#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    char a;cin>>a;
    vector<string> s(n);
    for(auto &i:s)cin>>i;
    int A=0,B=0,C=0,D=0,E=0;
    // for(auto i:s)cout<<i<<'\n';

    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            if(i==0 && s[j][i]=='o')A++;
            else if(i==1 && s[j][i]=='o')B++;
            else if(i==2 && s[j][i]=='o')C++;
            else if(i==3 && s[j][i]=='o')D++;
            else if(i==4 && s[j][i]=='o')E++;
        }
    }
    if(a=='A' && A )cout<<"Yes\n";
    else if( a=='B' && B )cout<<"Yes\n";
    else if(a=='C' && C )cout<<"Yes\n";
    else if(a=='D' && D )cout<<"Yes\n";
    else if(a=='E' && E )cout<<"Yes\n";
    else cout<<"No\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}