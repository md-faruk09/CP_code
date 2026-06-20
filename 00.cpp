#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return max(a.first,a.second)> max(b.first,b.second);
}

bool cmp1(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
}

void solve(){
    int n,a,k;cin>>n>>a>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto [x,y]:v)cout<<x<<' '<<y<<'\n';
    long long ans=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(a>0 && k>0 && v[i].first>=v[i].second){
            ans+=v[i].first;
            a--;
        }
        else if(k>0 && a>0 && v[i].second>=v[i].first){
            ans+=v[i].second;
            k--;
        }
        else {
            pos=i;
            break;
        }
    }
    cout<<"\n\n"<<a<<' '<<k<<'\n';
    cout<<"\n\n";
    vector<pair<int,int>> vv(v.begin()+pos,v.end());
    for(auto [x,y]:vv)cout<<x<<' '<<y<<'\n';
    cout<<"\n\n";

    if(a==0){
        sort(vv.begin(),vv.end(),cmp1);
        for(int i=0;i<k;i++)ans+=vv[i].second;
    }
    else {
        sort(vv.rbegin(),vv.rend());
        for(int i=0;i<a;i++){
            ans+=vv[i].first;
        }
    }
    for(auto [x,y]:vv)cout<<x<<' '<<y<<'\n';
    cout<<"\n\n";
    cout<<ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}