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

// #define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

// //harmonic diye comune number of divisor

// const int N=1e6+5;
// vll nod(N);
// void harmonic(){
//     for(int i=1;i<N;i++){
//         for(int j=i;j<N;j+=i){
//             nod[j]++;
//         }
//     }
// }
// void solve(){
//     harmonic();
//     int a,b,c;cin>>a>>b>>c;
//     int n=__gcd(a,b);
//     n=__gcd(n,c);
//     cout<<n<<nl;
//     cout<<nod[n]<<nl;
    
// }
// int32_t main() {
//     fastio;
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

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)
const int N=1e7;
int cnt=0;
vector<bool> isprime(N,true);
vll prime;
void sieve(){
    for(int i=3;i*i<N;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<N;j+=(i+i)){
                isprime[j]=false;
                cnt++;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2){
        if(isprime[i])prime.push_back(i);
    }
}
void solve(){
    frg(x,prime)cout<<x<<' ';
}
int32_t main() {
    fastio;
    sieve();
    int t=1;
    while(t--)solve();
    return 0;
}