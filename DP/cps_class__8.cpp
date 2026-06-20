// // 1/ DP

// // vector<11> dp(n, LLONG_MAX);
// // dp[0] = 0; // First stone, no cost
// // for (int i= 0; i < n; i++) {
// // for(int plus=1;plus .<= k && i+ plus .< n; plus++) {
// // .//i .---- >i.+plus
// // dp[i+plus] = min(dp[i + plus], dp[i] + abs(h[i] .- h[i+ plus]));

// // cout << dp[n -1] << '\n';

// // --------------------------------------
// // if (x == 0) // First Stone, No Cost
// // return 0;
// // if (dp[x] != LLONG_MAX) {
// // return dp[x];

// // //x-k,x-(k-1),x-(k-2), ..... ,x-1
// // for (int minus = 1; minus <= k && x - minus >= 0; minus++) {
// // // x - minus ---
// // 11 cost = f(x - minus) + abs(h[x] - h[x - minus]);
// // dp[×] = min(dp[×], cost);

// // return dp[x];

// // vector<11> dp(100005, LLONG_MAX), h(100005);
// // 11 k;

// // 11 f(11 x)
// // {

// // }

// // --------------------------
// // void Solve()

// // int n;
// // cin >> n;
// // vector<11> dp(n +1,);
// // dp[0] = 1; // Base Case
// // for (int i = 0; i <= n; i++) {
// // // i --- > i+1 or, i+2 or i+3 .... or i+6
// // for (int k = 1; k <= 6 && i + k <= n; k++) {
// // // i --- > i+k
// // dp[i + k] += dp[i];

// // }

// // cout << dp[n] << '\n';

// // }

// // }


// // ----------------------------

// // vector<11> dp(1000001, -1);

// // 11 f(11 x)

// // if (x == 0)
// // return 1;
// // if (dp[x] != -1)
// // return dp[x];
// // 11 ans= 0;
// // for (int minus = 1; minus <= 6 && x - minus >= 0; minus++) {
// // // x-minus
// // ans += f(x - minus);
// // ans %= MOD;

// // return dp[x] = ans;


// //dp fib

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
// const int N=2e5+5;
// vector<int> dp(11,-1);
// int fib(int x){
//     if(x==0)return dp[x]=0;
//     if(x==1)return dp[x]=1;
//     if(dp[x]!=-1)return dp[x];
//     return dp[x]=fib(x-1)+fib(x-2);
// }

// void solve(){
//     int n;cin>>n;
//     fib(n);
//     for(int i=0;i<=n;i++)cout<<dp[i]<<' ';
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
// int cnt =0;
// int fib(int x){
//     cnt++;
//     if(x==0)return 0;
//     if(x==1)return 1;
//     return fib(x-1)+fib(x-2);
// }
// void solve(){
//     int n;cin>>n;
//     cout<<fib(n)<<'\n';  
//     cout<<cnt<<'\n';  nf;

// }
int cnt=0;

vector<int>dp(10000,-1);
int fib(int x){
    cnt++;
    if(x==0)return dp[0]=0;
    if(x==1)return dp[1]=1;
    if(dp[x]!= -1)return dp[x];
    return  dp[x]=fib(x-1)+fib(x-2);
}

void solve(){
    int n;cin>>n;
    fib(n);
    cout<<dp[n]<<nl<<cnt<<nl;nf;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; cin>>t;
    while(t--)solve();
    return 0;
}