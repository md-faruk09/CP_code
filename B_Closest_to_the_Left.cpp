// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define fr(N)for(int i=0;i<N;i++)
// #define frg(x,a) for(auto x:a)
// #define vll vector<long long>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()


// void solve(){
//     int n,m;cin>>n>>m;
//     vll a(n);fr(n)cin>>a[i];
//     fr(m){
//         int x;cin>>x;
//         if(x<a[0]){
//             cout<<0<<nl;
//             continue;
//         }
//         int l=0,r=n-1,mid;
//         int ans=0;
//         while(l<=r){
//             mid=l+(r-l)/2;
//             if(a[mid]<=x){
//                 ans=mid;
//                 l=mid+1;
//             }else{
//                 r=mid-1;
//             }

//         }
//         cout<<ans+1<<nl;
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     while(t--)solve();
//     return 0;
// }



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
    int n,m;cin>>n>>m;
    multiset<pair<int,int>>a;
    fr(n){
        int x;cin>>x;
        a.insert({x,i+1});
    }
    fr(m){
        int x;cin>>x;
        if(x<a.begin()->first){
            cout<<0<<nl;
            continue;
        }
        cout<<(--a.upper_bound({x,n}))->second<<nl;


    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
    return 0;
}