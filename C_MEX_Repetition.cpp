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

// int mex(vector<int> &a,int n){
//     for(int i=0;i<=n;i++){
//         if(!count(all(a),i))return i;
//     }
// }

// void solve(){
//     int n,k;cin>>n>>k;
//     vll a(n);fr(n)cin>>a[i];
//     for(int i=0;i<k;i++){
//         for(int j=0;j<n;j++){
//             a[j]=mex(a,n);
//         }  
//     }
//     frg(x,a)cout<<x<<' ';nf; 
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;cin>>t;
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
    int n,k;cin>>n>>k;
    k=(k%(n+1));
    int sum=0;
    deque<int> a;
    fr(n){
        int x;cin>>x;
        a.push_back(x);
        sum+=x;
    }
    if(k==0){
        frg(x,a)cout<<x<<' ';
        return;
    }
    a.push_front(((n*(n+1))/2) -sum);
    n++;
    for(int i=(n-k+1); i<n;i++){
        cout<<a[i]<<' ';
    }
    for(int i=0;i<n-k;i++){
        cout<<a[i]<<' ';
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin>>t;
    while(t--){solve();cout<<'\n';}
    return 0;
}